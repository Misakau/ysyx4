/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_MU(
    input clk, rst,
    input [2:0] MemOp,
    input MemToReg,
    input MemWen,
    input CsrToReg,
    input [63:0] raddr,//load指令的读取地址，save指令的waddr，其他指令的ALURes
    input [63:0] wdata,
    input [63:0] csrres,
    output [63:0] rfdata
);
    wire [63:0] mdata, regsin;
    ysyx_220053_Mem mem(.MemOp(MemOp), .raddr(raddr), .MemWen(MemWen), .wdata(wdata), .rdata(mdata));//M
    wire is_wen;
    //WB Mret, Ecall, Csrwen, CsrToReg,
    assign is_wen = wen & (~rst);//WB
    assign regsin = (MemToReg == 1'b0) ? raddr : mdata;//WB
    assign rfdata = (CsrToReg == 1'b0) ? regsin : csrres;//WB
endmodule
