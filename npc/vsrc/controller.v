/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */

module ysyx_220053_controler(
    input [31:0] instr_i,
    input [6:0] op,
    input [2:0] func3,
    output reg [2:0] ExtOp,
    output reg wen
);
    always @(*) begin
        case(op)
            7'b0010011:
                begin
                    //wen = 1;
                    case(func3)
                        3'b000: begin ExtOp = 0; wen = 1; end
                        default: $display("no");
                    endcase
                end
             7'b1110011:
             	begin
             		case(instr_i[31:20])
             			1: begin ExtOp = 0; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

endmodule
