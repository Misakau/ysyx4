/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */

import "DPI-C" function void c_trap(input bit done);

module ysyx_220053_IDU(
    input  [31:0] instr_i,
    output [6:0]  op,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [2:0]  func3,
    output [6:0]  func7,
    output [63:0] imm,
    output ALUSrcA, MemToReg, MemWen,
    output [1:0] ALUSrcB,
    output [2:0] Branch,
    output [2:0] MemOp,
    output [4:0] ALUOp,
    output [1:0] MulOp,
    output wen,
    output Epc, Ecall, Mret, Csrwen, CsrToReg,
    output [2:0]CsrOp
);
    wire [2:0] ExtOp;
    
    assign op = instr_i[6:0];
    assign rd = instr_i[11:7];
    assign func3 = instr_i[14:12];
    assign rs1 = instr_i[19:15];
    assign rs2 = instr_i[24:20];
    assign func7 = instr_i[31:25];
    
    ysyx_220053_InstrToImm insttoimm(instr_i, ExtOp, imm);
    //controler
    ysyx_220053_controler control(.instr_i(instr_i), .op(op), .func3(func3), .func7(func7),
                                 .ALUSrcA(ALUSrcA),.ALUSrcB(ALUSrcB), 
                                 .Branch(Branch), .MemOp(MemOp), .MemToReg(MemToReg),
                                 .ExtOp(ExtOp), .ALUOp(ALUOp), .wen(wen), .MemWen(MemWen),
                                 .MulOp(MulOp),
                                 .Epc(Epc), .Ecall(Ecall), .Mret(Mret), .Csrwen(Csrwen), .CsrToReg(CsrToReg), .CsrOp(CsrOp)
                                 );

endmodule
