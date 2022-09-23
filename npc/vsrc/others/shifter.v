/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_Shifter(
    input [63:0] din,
    input [5:0] shamt,
    input AL,
    input LR,
    output reg [63:0] dout
);
    wire sgn; assign sgn = (AL == 1'b1) ? din[63] : 1'b0;
    integer i;
    always @(*) begin
        if (LR == 0) begin // left shift
            for (i = 0; i <= 63; i = i + 1) begin
                if (i >= shamt) dout[i] = din[i - {26'b0, shamt}]; else dout[i] = 1'b0;
            end
        end
        else begin // right shift 
            for (i = 0; i <= 63; i= i + 1) begin
                if (i >= 64 - {26'b0, shamt}) dout[i] = sgn; else dout[i] = din[i + {26'b0, shamt}];
            end
        end
    end
endmodule
