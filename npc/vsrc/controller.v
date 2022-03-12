/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_controler(
    input [31:0] instr_i,
    input [6:0] op,
    input [2:0] func3,
    output reg ALUSrcA, //0:pc,1:busa
    output reg [1:0] ALUSrcB,//0:busb,1:imm,2:4
    output reg [2:0] ExtOp,
    output reg [3:0] ALUOp,
    output reg [2:0] Branch,
    output reg wen
);

parameter ysyx_220053_I = 0;
parameter ysyx_220053_U = 1;
parameter ysyx_220053_S = 2;
parameter ysyx_220053_B = 3;
parameter ysyx_220053_J = 4;
parameter ysyx_220053_R = 5;

    always @(*) begin
        case(op)
            7'b0110111://lui
                begin
                    Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b1111; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b0010111://auipc
                begin
                    Branch = 0; ALUSrcA = 0; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b1101111://jal
                begin
                    Branch = 3'b001; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 4'b0000; ExtOp = ysyx_220053_J; wen = 1;
                end
            7'b0010011://addi
                begin
                     //wen = 1;
                    case(func3)
                        3'b000: begin Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 1; end
                        default: $display("no");
                    endcase
                end
            7'b1110011://ebreak
             	begin
             		case(instr_i[31:20])
             			1: begin Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no");
        endcase
    end

endmodule
