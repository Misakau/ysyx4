/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_Mem(
    input [2:0] MemOp,
    input [63:0] raddr, wdata,
    input MemWen,
    output reg [63:0] rdata
);
    wire [63:0] dataout;
    reg [7:0] wmask;
/*    always@(*) begin
        case(MemOp[1:0])
            2'b00: wmask = 8'b00001111;
            2'b01: wmask = 8'b00000001;
            2'b10: wmask = 8'b00000011;
            default: wmask = 8'b11111111;
        endcase
    end
*/
    always @(*) begin
        pmem_read(raddr, dataout);
        if(MemWen == 1'b1) pmem_write(raddr, wdata, wmask);
    end
    wire tmp;
    assign tmp = raddr[2:0];
    always@(*) begin
        case(MemOp)
            3'b000: rdata = {{32{dataout[63]}},dataout[tmp+31:tmp]};
            3'b001: rdata = {{56{dataout[63]}},dataout[tmp+7:tmp]};
            3'b010: rdata = {{48{dataout[63]}},dataout[tmp+15:tmp]};
            3'b011: rdata = dataout;
            3'b100: rdata = {{32{0}},dataout[tmp+31:tmp]};
            3'b101: rdata = {{56{0}},dataout[tmp+7:tmp]};
            3'b110: rdata = {{48{0}},dataout[tmp+15:tmp]};
            default: rdata = 0;
        endcase
    end
endmodule