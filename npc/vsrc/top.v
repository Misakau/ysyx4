/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

import "DPI-C" function int get_instr(input int instr);

module top(
  input clk,
  input rst,
  output [31:0] instr,
  output [63:0] pc
);
    our s;
    wire [31:0] instr_i;
    ysyx_220053_IFU my_ifu(
    .clk(clk),
    .rst(rst),
    .dnpc(dnpc),
    .pc(pc),
    .instr_o(instr_i)
    );
    assign instr = instr_i;
    wire [63:0] dnpc;
    wire [6:0] op, func7;
    wire [4:0] rd, rs1, rs2;
    wire [2:0] func3;
    wire [63:0] imm;
    wire wen, ALUSrcA, MemWen, MemToReg;
    wire [1:0] ALUSrcB;
    wire [4:0] ALUOp;
    wire [2:0] Branch;
    wire [2:0] MemOp;
    ysyx_220053_IDU my_idu(
      .instr_i(instr_i),
      .op(op),
      .rd(rd),.rs1(rs1),.rs2(rs2),
      .func3(func3),.func7(func7),
      .imm(imm),
      .ALUSrcA(ALUSrcA),
      .ALUSrcB(ALUSrcB),
      .ALUOp(ALUOp),
      .Branch(Branch),
      .MemOp(MemOp),
      .MemToReg(MemToReg),
      .MemWen(MemWen),
      .wen(wen)
      );

    ysyx_220053_EXU my_exu(
      .clk(clk),
      .rst(rst),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .wen(wen),
      .ALUSrcA(ALUSrcA),
      .ALUSrcB(ALUSrcB),
      .ALUOp(ALUOp),
      .Branch(Branch),
      .MemOp(MemOp),
      .MemToReg(MemToReg),
      .MemWen(MemWen),
      .pc(pc),
      .imm(imm),
      .dnpc(dnpc)
    );

    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
