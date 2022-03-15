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
            7'b1100111://jalr
                begin
                    Branch = 3'b010; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 1;
                end
            7'b0010011://addi
                begin
                    Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0010; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0011; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0100; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0110; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0111; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0001; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b101: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = (instr_i[30] == 1'b0) ? 4'b0101 : 4'b1101; ExtOp = ysyx_220053_I; wen = 1; end
                        default: $display("no");
                    endcase
                end
/*
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = ( (int64_t)src1 < (int64_t)src2 ));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = ( (uint64_t)src1 < (uint64_t)src2 ));
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = (src1 ^ src2));
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = (src1 | src2));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = (src1 & src2));  
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (src1 << (src2 & 0x3f)));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (src1 >> (src2 & 0x3f)));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (word_t)((int64_t)src1 >> (src2 & 0x3f)));
*/

            7'b1110011://ebreak
             	begin
             		case(instr_i[31:20])
             			1: begin Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 0; c_trap(1); end
             			default: $display("no");
             		endcase
             	end
            default: $display("no, op=%x",op);
        endcase
    end

endmodule
