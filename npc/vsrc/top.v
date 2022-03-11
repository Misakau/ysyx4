/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

module top(
  input clk,
  input rst,
  input [31:0]instr_i,
  output [63:0] pc
);
    our s;
    ysyx_220053_IFU my_ifu(
    .clk(clk),
    .rst(rst),
    .pc(pc)
    );

    wire [6:0] op, func7;
    wire [4:0] rd, rs1, rs2;
    wire [2:0] func3;
    wire [63:0] imm;
    wire wen;
    
    ysyx_220053_IDU my_idu(
      .instr_i(instr_i),
      .op(op),
      .rd(rd),.rs1(rs1),.rs2(rs2),
      .func3(func3),.func7(func7),
      .imm(imm),
      .wen(wen));

    ysyx_220053_EXU my_exu(
      .clk(clk),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .wen(wen),
      .imm(imm)
    );

    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
