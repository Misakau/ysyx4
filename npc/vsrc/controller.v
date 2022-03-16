/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_controler(
    input [31:0] instr_i,
    input [6:0] op,
    input [2:0] func3,
    input [6:0] func7,
    output reg ALUSrcA, //0:pc,1:busa
    output reg [1:0] ALUSrcB,//0:busb,1:imm,2:4
    output reg [2:0] ExtOp,
    output reg [3:0] ALUOp,
    output reg [2:0] Branch,
    output reg [2:0] MemOp,
    output reg MemToReg, wen, MemWen
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
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b1111; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b0010111://auipc
                begin
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; ALUSrcA = 0; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b1101111://jal
                begin
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 3'b001; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 4'b0000; ExtOp = ysyx_220053_J; wen = 1;
                end
            7'b1100111://jalr
                begin
                    MemWen = 0; MemOp = 0; MemOp = 0; MemToReg = 0; Branch = 3'b010; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 1;
                end
            7'b0010011://addi
                begin
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0010; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0011; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0100; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0110; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0111; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0001; ExtOp = ysyx_220053_I; wen = 1; end
                        default: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = (instr_i[30] == 1'b0) ? 4'b0101 : 4'b1101; ExtOp = ysyx_220053_I; wen = 1; end
                    endcase
                end
            7'b0110011://add
                begin
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin//add sub mul div  乘除法还没做
                                ALUSrcA = 1; ALUSrcB = 0; ExtOp = ysyx_220053_R; wen = 1; 
                                case(func7) 
                                    7'b0100000: ALUOp = 4'b1000;
                                    7'b0000001: ALUOp = 4'b1001;//1001 mul
                                    default: ALUOp = 4'b0000;
                                endcase 
                            end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0010; ExtOp = ysyx_220053_R; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0011; ExtOp = ysyx_220053_R; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0100; ExtOp = ysyx_220053_R; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0110; ExtOp = ysyx_220053_R; wen = 1; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0111; ExtOp = ysyx_220053_R; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0001; ExtOp = ysyx_220053_R; wen = 1; end
                        default: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = (instr_i[30] == 1'b0) ? 4'b0101 : 4'b1101; ExtOp = ysyx_220053_R; wen = 1; end
                    endcase
                end
/*
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << (src2 & 0x3f));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ( (int64_t)src1 < (int64_t)src2 ));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = ( (uint64_t)src1 < (uint64_t)src2 ));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = (src1 << (src2 & 0x3f)));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = (word_t)((int64_t)src1 >> (src2 & 0x3f)));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (word_t)(src1 * src2));
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(dest) = (word_t)(((__int128_t)((__int128_t)src1 * (__int128_t)src2)) >> 64));
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(dest) = (word_t)(((__int128_t)((__uint128_t)((src1 >= 0) ? src1 : -src1) * (__uint128_t)src2) * ((src1 >= 0) ? 1 : -1) ) >> 64));
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(dest) = (word_t)(((__int128_t)((__uint128_t)src1 * (__uint128_t)src2)) >> 64));
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (word_t)((int64_t)src1 / (int64_t)src2));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", rem    , R, R(dest) = (word_t)((int64_t)src1 % (int64_t)src2));
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", remu   , R, R(dest) = src1 % src2);
*/
            7'b1100011://beq
                begin
                    MemWen = 0; MemOp = 0; MemToReg = 0;  //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0010; ExtOp = ysyx_220053_B; Branch = 3'b100; wen = 0; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0010; ExtOp = ysyx_220053_B; Branch = 3'b101; wen = 0; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0010; ExtOp = ysyx_220053_B; Branch = 3'b110; wen = 0; end
                        3'b101: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0010; ExtOp = ysyx_220053_B; Branch = 3'b111; wen = 0; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0011; ExtOp = ysyx_220053_B; Branch = 3'b110; wen = 0; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 4'b0011; ExtOp = ysyx_220053_B; Branch = 3'b111; wen = 0; end
                        default: $display("no");
                    endcase
                end
/*
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int64_t)src1 < (int64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int64_t)src1 >= (int64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = ((uint64_t)src1 < (uint64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = ((uint64_t)src1 >= (uint64_t)src2) ? (dest + s->pc) : s->snpc);
*/
            7'b0000011://ld
                begin
                    MemWen = 0; MemToReg = 1; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b001; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b010; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b011; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b101; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b101: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b110; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b100; ExtOp = ysyx_220053_I; wen = 1; end
                        default: $display("no");
                    endcase
                end
/*
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));
*/
            7'b0100011:
                begin
                    MemWen = 1; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b001; ExtOp = ysyx_220053_I; wen = 0; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b010; ExtOp = ysyx_220053_I; wen = 0; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b000; ExtOp = ysyx_220053_I; wen = 0; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 4'b0000; MemOp = 3'b011; ExtOp = ysyx_220053_I; wen = 0; end
                        default: $display("no");
                    endcase
                end
/*
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
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
