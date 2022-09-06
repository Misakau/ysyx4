/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_icache (
    input clk,
    input rst,
    //cpu<->cache
    input [63:0] cpu_req_addr,
    input cpu_req_rw,
    input cpu_req_valid,
    output reg [63:0] cpu_data_read,
    output reg cpu_ready,
    output cache_idle,
    //cache<->memory
    output reg [63:0]   rw_addr_o,
    output reg          rw_req_o,//
    output reg          rw_valid_o,
    input [127:0]       data_read_i,//finish burst
    input               rw_ready_i//data_read_i in ram
);
    parameter nline = 256;
    reg V [0:nline - 1];
    reg [51:0] tag [0:nline - 1];

    wire [7:0] cpu_index;
    wire [3:0] cpu_offset;
    wire [51:0] cpu_tag;

    assign cpu_offset = cpu_req_addr[3:0];
    assign cpu_index = cpu_req_addr[11:4];
    assign cpu_tag = cpu_req_addr[63:12];

    reg hit;

    //status transform

    parameter [2:0] IDLE = 3'b000, CompareTag = 3'b001, Allocate = 3'b010, Readin = 3'b011, RETN = 3'b100;

    reg [2:0] cur_status, next_status;

    always @(posedge clk) begin
        if(rst) cur_status <= IDLE;
        else cur_status <= next_status;
    end
    assign cache_idle = (cur_status == IDLE);
    always @(*) begin
        case (cur_status)
            IDLE: begin
                if(cpu_req_valid) next_status = CompareTag;
                else next_status = IDLE;
            end
            CompareTag: begin
                if(hit) next_status = Readin;
                else next_status = Allocate;
            end
            Allocate: begin
                if(rw_ready_i) begin
                    next_status = CompareTag;
                end
                else next_status = Allocate;
            end
            Readin: next_status = IDLE;//RETN;
            //RETN: next_status = IDLE;
            default: next_status = IDLE;
        endcase
    end

    //cache line
    wire [127:0] line_o [0:3];
    wire line_wen [0:3];
    ysyx_220053_S011HD1P_X32Y2D128 ram0(.Q(line_o[0]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [0]),.A(cpu_index[5:0]),.D(data_read_i));
    ysyx_220053_S011HD1P_X32Y2D128 ram1(.Q(line_o[1]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [1]),.A(cpu_index[5:0]),.D(data_read_i));
    ysyx_220053_S011HD1P_X32Y2D128 ram2(.Q(line_o[2]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [2]),.A(cpu_index[5:0]),.D(data_read_i));
    ysyx_220053_S011HD1P_X32Y2D128 ram3(.Q(line_o[3]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [3]),.A(cpu_index[5:0]),.D(data_read_i));
    
    //CompareTag
    always @(*) begin
        if(cur_status == CompareTag && V[cpu_index] && tag[cpu_index] == cpu_tag)
            hit=1'b1;
        else hit=1'b0;
    end

    always @(posedge clk) begin
        if(rst) begin
            cpu_data_read <= 0;
            cpu_ready <= 1'b0;
        end
        else if(cur_status == Readin) begin
            cpu_ready <= 1'b1;
            case(cpu_index[7:6])
                2'b00: cpu_data_read <= cpu_offset[3] ? line_o[0][127:64] : line_o[0][63:0];
                2'b01: cpu_data_read <= cpu_offset[3] ? line_o[1][127:64] : line_o[1][63:0];
                2'b10: cpu_data_read <= cpu_offset[3] ? line_o[2][127:64] : line_o[2][63:0];
                default: cpu_data_read <= cpu_offset[3] ? line_o[3][127:64] : line_o[3][63:0];
            endcase
        end
        else cpu_ready <= 1'b0;
    end

    //Allocate
    assign line_wen[0] = !(cpu_index[7:6] == 2'b00 && cur_status == Allocate && rw_ready_i);
    assign line_wen[1] = !(cpu_index[7:6] == 2'b01 && cur_status == Allocate && rw_ready_i);
    assign line_wen[2] = !(cpu_index[7:6] == 2'b10 && cur_status == Allocate && rw_ready_i);
    assign line_wen[3] = !(cpu_index[7:6] == 2'b11 && cur_status == Allocate && rw_ready_i);
 
    integer  i;
    always @(posedge clk) begin
        if(rst) begin
            rw_req_o <= 1'b0;
            rw_valid_o <= 1'b0;
            rw_addr_o <= 0;
            for (i = 0; i < 64; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 64; i < 128; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 128; i < 192; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 192; i < nline; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
        end
        else if(cur_status == Allocate) begin//read new block from memory to cache
            if(!rw_ready_i) begin// not finish
                rw_addr_o <= {cpu_req_addr[63:4],4'b0000};
                rw_req_o <= 1'b0;
                rw_valid_o <= 1'b1;
            end
            else begin
                rw_valid_o <= 1'b0;
                V[cpu_index] <= 1'b1;
                tag[cpu_index] <= cpu_tag;
            end
        end
        else begin
            rw_valid_o <= 1'b0;
        end
    end
endmodule

module ysyx_220053_dcache (
    input clk,
    input rst,
    //cpu<->cache
    input [63:0] cpu_req_addr,
    input cpu_req_rw,
    input cpu_req_valid,
    input [63:0] cpu_data_write,
    input [7:0]  cpu_wmask,
    output reg [63:0] cpu_data_read,
    output reg cpu_ready,
    output cache_idle,
    //cache<->memory
    output reg [63:0]   rw_addr_o,
    output reg          rw_req_o,//
    output reg          rw_valid_o,
    output reg [127:0]  rw_w_data_o,
    input [127:0]       data_read_i,//finish burst
    input               rw_ready_i,//ready to give data or fetch data
    input Fence_i,
    output reg rw_size_o,
    input cpu_dev
);
    parameter nline = 256;
    reg V [0:nline - 1], D [0:nline - 1];
    reg [51:0] tag [0:nline - 1];

    wire [7:0] cpu_index;
    wire [3:0] cpu_offset;
    wire [51:0] cpu_tag;

    assign cpu_offset = cpu_req_addr[3:0];
    assign cpu_index = cpu_req_addr[11:4];
    assign cpu_tag = cpu_req_addr[63:12];

    reg hit;
    reg [7:0] idx_cnt;
    //status transform

    parameter [3:0] IDLE = 4'b0000, CompareTag = 4'b0001, Allocate = 4'b0010, Readin = 4'b0011;
    parameter [3:0] WriteBack = 4'b0100, Readout = 4'b0101, Writein = 4'b0110, FENCE_I = 4'b0111; //RETN = 3'b111;
    parameter [3:0] DEV = 4'b1000; //RETN = 3'b111;

    reg [3:0] cur_status, next_status;
    assign cache_idle = (cur_status == IDLE);
    
    always @(posedge clk) begin
        if(rst || (cur_status == IDLE && Fence_i)) idx_cnt <= 0;
        else if(next_status == Readout) begin
            idx_cnt <= idx_cnt + 1;
        end
    end

    always @(posedge clk) begin
        if(rst) cur_status <= IDLE;
        else cur_status <= next_status;
    end

    always @(*) begin
        case (cur_status)
            IDLE: begin
                if(cpu_req_valid)begin
                    if(Fence_i) next_status = FENCE_I;
                    else if(cpu_dev) next_status = DEV;
                    else next_status = CompareTag;
                end
                else next_status = IDLE;
            end
            CompareTag: begin
                if(hit) next_status = Readin;
                else if(V[cpu_index] && D[cpu_index]) next_status = WriteBack;
                else next_status = Allocate;
            end
            Allocate: begin
                if(rw_ready_i) begin
                    next_status = CompareTag;
                end
                else next_status = Allocate;
            end
            Readin: begin
                if(cpu_req_rw) next_status = Writein;
                else next_status = IDLE;
            end
            WriteBack: begin
                if(rw_ready_i) begin
                    next_status = Allocate;
                end
                else next_status = WriteBack;
            end
            Writein: next_status = IDLE;////
            //RETN: next_status = IDLE;
            FENCE_I: begin
                if(rw_ready_i || !V[idx_cnt]) begin
                    if(idx_cnt == 8'd255) next_status = IDLE;
                    else next_status = Readout;
                end
                else next_status = FENCE_I;
            end
            Readout: next_status = FENCE_I;
            DEV: begin
                if(rw_ready_i) next_status = IDLE;
                else next_status = DEV;
            end
            default: next_status = IDLE;
        endcase
    end
    //cache line
    wire [127:0] data_in_ram;
    reg  [127:0] bwen;
    wire [127:0] line_o [0:3];
    wire line_wen [0:3];
    ysyx_220053_S011HD1P_X32Y2D128 ram0(.Q(line_o[0]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [0]),.A(cpu_index[5:0]),.D(data_in_ram));
    ysyx_220053_S011HD1P_X32Y2D128 ram1(.Q(line_o[1]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [1]),.A(cpu_index[5:0]),.D(data_in_ram));
    ysyx_220053_S011HD1P_X32Y2D128 ram2(.Q(line_o[2]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [2]),.A(cpu_index[5:0]),.D(data_in_ram));
    ysyx_220053_S011HD1P_X32Y2D128 ram3(.Q(line_o[3]),.CLK(clk),.CEN(1'b0),.WEN(line_wen [3]),.A(cpu_index[5:0]),.D(data_in_ram));
    
    integer  i,j;
    //CompareTag
    always @(*) begin
        if(cur_status == CompareTag && V[cpu_index] && tag[cpu_index] == cpu_tag)
            hit=1'b1;
        else hit=1'b0;
    end

    always @(posedge clk) begin
        if(rst) begin
            cpu_data_read <= 0;
            cpu_ready <= 1'b0;
        end
        else if(cur_status == Readin) begin
            cpu_ready <= 1'b1;
            if(cpu_req_rw == 1'b0) begin//read hit
                case(cpu_index[7:6])
                    2'b00: cpu_data_read <= cpu_offset[3] ? line_o[0][127:64] : line_o[0][63:0];
                    2'b01: cpu_data_read <= cpu_offset[3] ? line_o[1][127:64] : line_o[1][63:0];
                    2'b10: cpu_data_read <= cpu_offset[3] ? line_o[2][127:64] : line_o[2][63:0];
                    default: cpu_data_read <= cpu_offset[3] ? line_o[3][127:64] : line_o[3][63:0];
                endcase
            end
        end
        else if((cur_status == FENCE_I || cur_status == Readout) && next_status == IDLE) cpu_ready <= 1'b1;
        else if(cur_status == DEV && rw_ready_i) begin
            cpu_ready <= 1'b1;
            if(cpu_req_rw == 1'b0) begin//read hit
                cpu_data_read <= data_read_i[63:0];
            end
        end
        else cpu_ready <= 1'b0;
    end

    always @(posedge clk)begin
       if(cur_status == Readin && cpu_req_rw) begin//write hit
            for(i = 0; i < 8; i = i + 1)begin
                bwen[i*8 +: 8] <= {8{(~cpu_offset[3] & cpu_wmask[i])}};
            end
            for(i = 8; i < 16; i = i + 1)begin
                bwen[i*8 +: 8] <= {8{(cpu_offset[3] & cpu_wmask[i-8])}};
            end
       end
       else begin//write back
            bwen <= 0;
       end
    end
    wire [127:0] dinram = ({cpu_data_write,cpu_data_write} & bwen) | (line_o[cpu_index[7:6]] & ~bwen); 
    assign data_in_ram = (cur_status == Writein) ? dinram : data_read_i;


    //Allocate
    assign line_wen[0] = !(cpu_index[7:6] == 2'b00 && (cur_status == Allocate && rw_ready_i || cur_status == Writein));
    assign line_wen[1] = !(cpu_index[7:6] == 2'b01 && (cur_status == Allocate && rw_ready_i || cur_status == Writein));
    assign line_wen[2] = !(cpu_index[7:6] == 2'b10 && (cur_status == Allocate && rw_ready_i || cur_status == Writein));
    assign line_wen[3] = !(cpu_index[7:6] == 2'b11 && (cur_status == Allocate && rw_ready_i || cur_status == Writein));

    always @(posedge clk) begin//dirty bit
        if(rst) begin
            for (i = 0; i < 64; i = i + 1)begin
                D[i] <= 1'b0;
            end
            for (i = 64; i < 128; i = i + 1)begin
                D[i] <= 1'b0;
            end
            for (i = 128; i < 192; i = i + 1)begin
                D[i] <= 1'b0;
            end
            for (i = 192; i < nline; i = i + 1)begin
                D[i] <= 1'b0;
            end
        end
        else if(cur_status == Allocate && rw_ready_i) D[cpu_index] <= 1'b0;
        else if(cur_status == Readin && cpu_req_rw) D[cpu_index] <= 1'b1;
        else if(cur_status == FENCE_I && rw_ready_i) D[idx_cnt] <= 1'b0;
    end

    always @(posedge clk) begin
        if(rst) begin
            rw_req_o <= 1'b0;
            rw_valid_o      <= 1'b0;
            rw_addr_o <= 0;
            rw_w_data_o <= 0;
            rw_size_o <= 0;
            for (i = 0; i < 64; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 64; i < 128; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 128; i < 192; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
            for (i = 192; i < nline; i = i + 1)begin
                V[i] <= 1'b0;
                tag[i]  <= 0;
            end
        end
        else if(cur_status == Allocate) begin//read new block from memory to cache
            if(!rw_ready_i) begin// not finish
                rw_addr_o <= {cpu_req_addr[63:4],4'b0000};
                rw_req_o <= 1'b0;
                rw_valid_o <= 1'b1;
                rw_size_o <= 8'hff;
            end
            else begin
                rw_valid_o <= 1'b0;
                rw_size_o <= 0;
                V[cpu_index] <= 1'b1;
                tag[cpu_index] <= cpu_tag;
            end
        end
        else if(cur_status == WriteBack) begin
            if(!rw_ready_i) begin
                rw_addr_o <= {tag[cpu_index],cpu_index,4'b0000};
                rw_req_o  <= 1'b1;
                rw_w_data_o <= line_o[cpu_index[7:6]];
                rw_valid_o <= 1'b1;
                rw_size_o <= 8'hff;
            end
            else begin
                rw_valid_o <= 1'b0;
                rw_size_o <= 0;
            end
        end
        else if(cur_status == FENCE_I) begin
            if(!rw_ready_i && V[idx_cnt]) begin
                rw_addr_o <= {tag[idx_cnt],idx_cnt,4'b0000};
                rw_req_o  <= 1'b1;
                rw_w_data_o <= line_o[idx_cnt[7:6]];
                rw_valid_o <= 1'b1;
                rw_size_o <= 8'hff;
            end
            else begin
                rw_valid_o <= 1'b0;
                rw_size_o <= 0;
            end
        end
        else if(cur_status == DEV) begin
            if(!rw_ready_i) begin
                rw_addr_o <= {cpu_req_addr[63:3],3'b000};
                rw_req_o  <= cpu_req_rw;
                rw_w_data_o <= {{64{1'b0}},cpu_data_write};
                rw_valid_o <= 1'b1;
                rw_size_o <= cpu_wmask;
            end
            else begin
                rw_valid_o <= 1'b0;
                rw_size_o <= 0;
            end
        end
        else begin
            rw_valid_o <= 1'b0;
            rw_size_o <= 0;
        end
    end
endmodule

module ysyx_220053_S011HD1P_X32Y2D128(
    Q, CLK, CEN, WEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;

output  reg [Bits-1:0]      Q;
input                   CLK;
input                   CEN;
input                   WEN;
input   [Add_Width-1:0] A;
input   [Bits-1:0]      D;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(!CEN && !WEN) begin
        ram[A] <= D;
    end
    Q <= !CEN && WEN ? ram[A] : {4{$random}};
end

endmodule
module ysyx_220053_S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
end

endmodule
