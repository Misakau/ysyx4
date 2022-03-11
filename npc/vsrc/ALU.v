/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_ALU(
    input [63:0] inputa, inputb,
    input [3:0] ALUOp,
    output reg [63:0] result
);
    wire [63:0] res0, res1;
    wire sub = ALUOp[3];

    ysyx_220053_Adder64 adder(.result(res0),.x(inputa),.y(inputb),.sub(sub));
    assign res1 = inputb;
    always@(*) begin
        case(ALUOp)
         4'b1111: result = res1;
         default: result = res0;
        endcase
    end
endmodule
