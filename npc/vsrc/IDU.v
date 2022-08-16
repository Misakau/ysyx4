/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */

import "DPI-C" function void c_trap(input bit done);

module ysyx_220053_IDU(
    input  [31:0] instr_i,
    input  [63:0] pc,
    input  [63:0] busa, busb,
    input  [63:0] mtvec, mepc,

    output [63:0] dnpc,
    output [6:0]  op,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [2:0]  func3,
    output [6:0]  func7,
    output [63:0] imm,
    output ALUSrcA, MemToReg, MemWen,
    output [1:0] ALUSrcB,
    output [2:0] MemOp,
    output [4:0] ALUOp,
    output [1:0] MulOp,
    output wen,
    output Ecall, Mret, Csrwen, CsrToReg,
    output [2:0]CsrOp,
    output [11:0] CsrId,
    output Ebreak
);
    wire [2:0] ExtOp;
    wire [2:0] Branch;
    ysyx_220053_InstrToImm insttoimm(instr_i, ExtOp, imm);
    //controler
    ysyx_220053_controler control(.instr_i(instr_i), .op(op), .func3(func3), .func7(func7),
                                 .ALUSrcA(ALUSrcA),.ALUSrcB(ALUSrcB), 
                                 .Branch(Branch), .MemOp(MemOp), .MemToReg(MemToReg),
                                 .ExtOp(ExtOp), .ALUOp(ALUOp), .wen(wen), .MemWen(MemWen),
                                 .MulOp(MulOp),
                                 .Ecall(Ecall), .Mret(Mret), .Csrwen(Csrwen), .CsrToReg(CsrToReg), .CsrOp(CsrOp), .Ebreak(Ebreak)
                                 );
    wire ecall = Ecall;
    assign CsrId = (ecall == 0) ? imm[11:0] : 12'h342;//ecall mcause
    wire [63:0] addr_res;
    wire [63:0] alu_inA, alu_inB;
    wire [63:0] res;
    wire zero;
    assign alu_inA = (ALUSrcA == 1'b1) ? busa : pc;
    assign alu_inB = (ALUSrcB == 2'b01) ? imm : ((ALUSrcB == 2'b00) ? busb : 4);

    ysyx_220053_ALU_lite na_alu(.inputa(alu_inA), .inputb(alu_inB), .ALUOp(ALUOp), .result(res), .zero(zero));
    ysyx_220053_NexAddr nextaddr(.mtvec(mtvec), .Ecall(Ecall), .mepc(mepc), .Mret(Mret),
                                 .Zero(zero), .res0(res[0]), .Branch(Branch), .pc(pc),
                                 .imm(imm), .busa(busa), .dnpc(addr_res));
    
    assign dnpc = {addr_res[63:1], 1'b0};

    assign op = instr_i[6:0];
    assign rd = instr_i[11:7];
    assign func3 = instr_i[14:12];
    assign rs1 = (Csrwen == 0) ? instr_i[19:15] : instr_i[11:7];//ecall a7
    assign rs2 = instr_i[24:20];
    assign func7 = instr_i[31:25];

endmodule
