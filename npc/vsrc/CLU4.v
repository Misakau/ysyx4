/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_CLU4(
    output [3:0] c,
    input [3:0] p,g,
    input c0
);
    assign c[0]=g[0] | (p[0] & c0);
    genvar i;
    generate
        for (i=1;i<=3;i=i+1) begin
            assign c[i]=g[i] | (p[i] & c[i-1]);
        end
    endgenerate
endmodule


