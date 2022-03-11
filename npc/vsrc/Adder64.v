/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
module ysyx_220053_Adder64(
    output [63:0] result,
    output cout,
    input [63:0] x,y,
    input sub
);
    wire [31:0] res_l, res_h;
    wire c_l;
    ysyx_220053_Adder32 adder_low(res_l, c_l, x[31:0], y[31:0], sub);
    ysyx_220053_Adder32 adder_high(res_h, cout, x[63:32], y[63:32], c_l);
    assign result = {res_h, res_l};
endmodule
