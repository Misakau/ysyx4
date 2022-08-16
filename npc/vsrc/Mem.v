/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_Mem(
    input clk,
    input [2:0] MemOp,
    input [63:0] raddr, wdata,
    input MemWen,
    output reg [63:0] rdata
);
    wire [63:0] dataout;
    reg [7:0] wmask;
    wire [63:0] al_addr = {raddr[63:3],{3{1'b0}}};
    integer i,st = {{29{1'b0}},raddr[2:0]};
    integer st_bit = {{26{1'b0}},raddr[2:0],{3{1'b0}}};
    wire [63:0] wdatad = wdata[63:0];
    wire [31:0] wdataw = wdata[31:0];
    wire [15:0] wdatah = wdata[15:0];
    wire [7:0]  wdatab = wdata[7:0];
    reg [63:0] datain;

    always @(*) begin
        pmem_read(raddr, dataout, bytes); 
    end
    always @(posedge clk) begin
        if(MemWen == 1'b1) pmem_write(raddr, datain, wmask);
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
        if(raddr == 64'h800020d1) begin
            $display(MemOp);
        end
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
