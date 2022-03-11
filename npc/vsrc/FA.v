/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
module ysyx_220053_FA(
    output f,cout,
    input x,y,cin
);
    assign f= x ^ y ^ cin;
    assign cout= (x & y) | (x & cin) | (y & cin);
endmodule
