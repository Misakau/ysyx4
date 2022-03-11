/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_controler(
    input [31:0] instr_i,
    input [6:0] op,
    input [2:0] func3,
    output reg ALUSrcB,
    output reg [2:0] ExtOp,
    output reg wen
);

`def ysyx_220053_I 0
`def ysyx_220053_U 1
`def ysyx_220053_S 2
`def ysyx_220053_B 3
`def ysyx_220053_J 4
`def ysyx_220053_R 5

    always @(*) begin
        case(op)
            7'b0110111://lui
                begin
                    ALUSrcB = 0; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b0010011://addi
                begin
                    //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcB = 1; ExtOp = ysyx_220053_I; wen = 1; end
                        default: $display("no");
                    endcase
                end
            7'b1110011://ebreak
             	begin
             		case(instr_i[31:20])
             			1: begin ALUSrcB = 1; ExtOp = ysyx_220053_I; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

endmodule
