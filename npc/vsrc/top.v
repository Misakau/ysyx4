/* verilator lint_off UNUSED */
module top(
  input clk,
  input rst,
  input instr_i,
  output [63:0] pc
);
    our s;
    ysyx_220053_IFU my_ifu(
    .clk(clk),
    .rst(rst),
    .pc(pc)
    );
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
