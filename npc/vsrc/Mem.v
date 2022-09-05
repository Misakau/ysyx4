/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_Mem(
    input clk,
    input rst,
    input [2:0] MemOp,
    input [63:0] raddr, wdata,
    input MemWen,
    input vis_mem,
    input req_rw,
    output reg [63:0] rdata,
    output m_busy,
    output [63:0]     d_rw_addr_o,
    output            d_rw_req_o,
    output            d_rw_valid_o,
    output [127:0]    d_rw_w_data_o,
    input  [127:0]    d_data_read_i,
    input             d_rw_ready_i,
    input Fence_i,
    output is_cmp
);
    wire [63:0] dataout;
    reg [7:0] wmask;
    integer i,st = {{29{1'b0}},raddr[2:0]};
    integer st_bit = {{26{1'b0}},raddr[2:0],{3{1'b0}}};
    wire [63:0] wdatad = wdata[63:0];
    wire [31:0] wdataw = wdata[31:0];
    wire [15:0] wdatah = wdata[15:0];
    wire [7:0]  wdatab = wdata[7:0];
    reg [63:0] datain;

    wire [63:0] cpu_req_addr = raddr;
    wire cpu_req_rw = req_rw;
    wire cpu_req_valid;
    wire [63:0] cpu_data_write = datain;
    wire [7:0]  cpu_wmask = wmask;
    wire cache_idle;

    wire d_cpu_ready;
    wire [63:0] cpu_data_read;
    reg cache_doing;

    wire vis_dev = (raddr[31:28] == 4'ha || raddr[31:24] == 8'h2);//0x 0200 0000
    wire vis_clint = (raddr[31:24] == 8'h2);
    wire clint_wen = MemWen & vis_clint;
    wire [63:0] clint_rdata;
    ysyx_220053_CLint clint(
        .clk(clk),.rst(rst),.clint_wen(clint_wen),.wdata(wdata),.rdata(clint_rdata),.is_cmp(is_cmp)
    );


    always @(posedge clk) begin
        if(rst) begin
            cache_doing <= 1'b0;
        end
        else if(d_cpu_ready) begin
            cache_doing <= 1'b0;
        end
        else if(cpu_req_valid && cache_idle) begin
            cache_doing <= 1'b1;
        end
    end
    assign cpu_req_valid = (!cache_doing && !d_cpu_ready && vis_mem && !vis_dev);
    assign m_busy = (!d_cpu_ready && vis_mem && !vis_dev);

    ysyx_220053_dcache dcache(
      clk,rst,
    //cpu<->cache
      cpu_req_addr,cpu_req_rw,cpu_req_valid,cpu_data_write,cpu_wmask,cpu_data_read,d_cpu_ready,cache_idle,
    //cache<->memory
      d_rw_addr_o,d_rw_req_o,d_rw_valid_o,d_rw_w_data_o,d_data_read_i,d_rw_ready_i,
    //fence.i
      Fence_i
    );
    wire [63:0] dev_dataout;
    assign dataout = (vis_dev) ? ((vis_clint) ? clint_rdata : dev_dataout) : cpu_data_read;
    always @(*) begin
        pmem_read(raddr, dev_dataout, bytes);
    end
    always @(posedge clk) begin
        if(vis_dev && !vis_clint && MemWen == 1'b1) pmem_write(raddr, datain, wmask);
    end

    //write
    always@(*) begin
        case(MemOp[1:0])
            2'b00: begin //4byte
                for (i = 0; i < st; i = i + 1) begin
                    wmask[i] = 1'b0;
                end
                for (i = 0; i < 4; i = i + 1) begin
                    wmask[st + i] = 1'b1;
                end
                for (i = st + 4; i < 8; i = i + 1) begin
                    wmask[i] = 1'b0;
                end

                for (i = 0; i < st_bit; i = i + 1) begin
                    datain[i] = 1'b0;
                end
                for (i = 0; i < 32; i = i + 1) begin
                    datain[st_bit + i] = wdataw[i];
                end
                //datain[st + 31 : st] = wdataw;
                for (i = st_bit + 32; i < 64; i = i + 1) begin
                    datain[i] = 0;
                end
            end   
            2'b01: begin //1byte
                for (i = 0; i < st_bit; i = i + 1) begin
                    datain[i] = 0;
                end
                for (i = 0; i < 8; i = i + 1) begin
                    datain[st_bit + i] = wdatab[i];
                end
                //datain[st + 7 : st] = wdatab;
                for (i = st_bit + 8; i < 64; i = i + 1) begin
                    datain[i] = 0;
                end

                for (i = 0; i < st; i = i + 1) begin
                    wmask[i] = 1'b0;
                end
                wmask[st] = 1'b1; 
                for (i = st + 1; i < 8; i = i + 1) begin
                    wmask[i] = 1'b0;
                end
            end
            2'b10: begin //2byte
                for (i = 0; i < st_bit; i = i + 1) begin
                    datain[i] = 0;
                end
                for (i = 0; i < 16; i = i + 1) begin
                    datain[st_bit + i] = wdatah[i];
                end
                //datain[st + 15 : st] = wdatah;
                for (i = st_bit + 16; i < 64; i = i + 1) begin
                    datain[i] = 0;
                end

                for (i = 0; i < st; i = i + 1) begin
                    wmask[i] = 1'b0;
                end
                wmask[st] = 1'b1;
                wmask[st + 1] = 1'b1;
                for (i = st + 2; i < 8; i = i + 1) begin
                    wmask[i] = 1'b0;
                end

                //datain = {4{wdatah}};  
            end
            default: begin
                datain = wdatad;
                wmask = 8'b11111111;//8byte
            end
        endcase
    end

    reg [63:0] datad;
    reg [31:0] dataw;
    reg [15:0] datah;
    reg [7:0]  datab;
    reg [7:0]  bytes;
    //read
    always@(*) begin
        case(MemOp[1:0])
            2'b00: bytes = 4;
            2'b01: bytes = 1;
            2'b10: bytes = 2;
            default: bytes = 8;
        endcase
    end
    always @(*) begin
        case(MemOp[1:0])
            2'b00: begin
                for (i = 0; i < 32; i = i + 1) begin
                    dataw[i] = dataout[st_bit + i];
                end
            end
            2'b01: begin
                for (i = 0; i < 8; i = i + 1) begin
                    datab[i] = dataout[st_bit + i];
                end
            end
            2'b10: begin
                for (i = 0; i < 16; i = i+1) begin
                    datah[i] = dataout[st_bit + i];
                end
            end
            default: datad = dataout;
        endcase
    end
    always@(*) begin
        case(MemOp)
            3'b000: rdata = {{32{dataw[31]}},dataw};
            3'b001: rdata = {{56{datab[7]}},datab};
            3'b010: rdata = {{48{datah[15]}},datah};
            3'b011: rdata = datad;
            3'b100: rdata = {{32{1'b0}},dataw};
            3'b101: rdata = {{56{1'b0}},datab};
            3'b110: rdata = {{48{1'b0}},datah};
            default: rdata = 0;
        endcase
    end
endmodule
module ysyx_220053_CLint(
    input clk,
    input rst,
    input clint_wen,
    input [63:0] wdata,
    output [63:0] rdata,
    output is_cmp
);
    reg [63:0] mtime, mtimecmp;
    assign rdata = mtimecmp;
    assign is_cmp = (mtime >= mtimecmp);

    always @(posedge clk) begin
        if(rst) begin
            mtime <= 0;
        end
        else begin
            mtime <= mtime + 1;
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            mtimecmp <= 0;
        end
        else if(clint_wen) begin
            mtimecmp <= wdata;
        end
    end
endmodule
