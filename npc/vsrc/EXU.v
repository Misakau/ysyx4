/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk, rst,
    input [4:0] rd,
    input [63:0] busa,
    input [63:0] busb,
    input wen, ALUSrcA, MemToReg, MemWen, Mret, Ecall, Csrwen, CsrToReg,
    input [2:0] CsrOp,
    input [1:0] ALUSrcB,
    input [4:0] ALUOp,
    input [2:0] Branch,
    input [2:0] MemOp,
    input [1:0] MulOp,
    input [63:0] pc,
    input [63:0] imm,
    output [63:0] dnpc
);
    wire zero;
    wire [63:0] busa, busb, regsin, mdata, wdata;
    wire [63:0] res;
    wire [63:0] alu_inA, alu_inB;
    wire is_wen;
    assign is_wen = wen & (~rst);//WB
    assign alu_inA = (ALUSrcA == 1'b1) ? busa : pc;
    assign alu_inB = (ALUSrcB == 2'b01) ? imm : ((ALUSrcB == 2'b00) ? busb : 4);
    assign regsin = (MemToReg == 1'b0) ? res : mdata;//WB
    assign wdata = (CsrToReg == 0) ? regsin : csrres;//WB
    
    wire [63:0] mepc;
    wire [63:0] csrres;
//csr
//Ecall, Csrwen, CsrOp,//
//可以用DPI-C来实现ecall?
    
    wire [63:0] datain, mtvec;
    
    
    ysyx_220053_ALU alu64(.inputa(alu_inA), .inputb(alu_inB), .ALUOp(ALUOp), .MulOp(MulOp), .result(res), .zero(zero));
        //busa + immI; //addi
    ysyx_220053_Mem mem(.MemOp(MemOp), .raddr(res), .MemWen(MemWen), .wdata(busb), .rdata(mdata));
   
endmodule
