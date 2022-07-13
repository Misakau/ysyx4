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
    output reg [4:0] ALUOp,
    output reg [2:0] Branch,
    output reg [2:0] MemOp,
    output reg [1:0] MulOp,
    output reg MemToReg, wen, MemWen,
    output reg Epc, Ecall, Mret, Csrwen, CsrToReg,
    output reg [2:0]CsrOp
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
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b01111; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b0010111://auipc
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; ALUSrcA = 0; ALUSrcB = 1; ALUOp = 5'b00000; ExtOp = ysyx_220053_U; wen = 1;
                end
            7'b1101111://jal
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 3'b001; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 5'b00000; ExtOp = ysyx_220053_J; wen = 1;
                end
            7'b1100111://jalr
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemOp = 0; MemToReg = 0; Branch = 3'b010; ALUSrcA = 0; ALUSrcB = 2; ALUOp = 5'b00000; ExtOp = ysyx_220053_I; wen = 1;
                end
            7'b0010011://addi
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00010; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00011; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00100; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00110; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00111; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00001; ExtOp = ysyx_220053_I; wen = 1; end
                        default: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = (instr_i[30] == 1'b0) ? 5'b00101 : 5'b01101; ExtOp = ysyx_220053_I; wen = 1; end
                    endcase
                end
            7'b0110011://add MulOp = 0; 
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    if(func7 == 7'b0000001) begin//mul div rem
                        case(func3)
                            3'b000: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b01001; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b001: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b01; ALUOp = 5'b01001; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b010: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b10; ALUOp = 5'b01001; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b011: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b11; ALUOp = 5'b01001; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b100: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b01010; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b101: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b01011; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b110: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b01100; ExtOp = ysyx_220053_R; wen = 1; end
                            default:begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b01110; ExtOp = ysyx_220053_R; wen = 1; end
                        endcase//7'b0000001: begin  end
                    end
                    else begin
                        MulOp = 0; 
                        case(func3)
                            3'b000: begin//add sub
                                    ALUSrcA = 1; ALUSrcB = 0; ExtOp = ysyx_220053_R; wen = 1; 
                                    case(func7) 
                                        7'b0100000: ALUOp = 5'b01000; 
                                        default: ALUOp = 5'b00000; 
                                    endcase 
                                end
                            3'b010: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00010; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b011: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00011; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b100: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00100; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b110: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00110; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b111: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00111; ExtOp = ysyx_220053_R; wen = 1; end
                            3'b001: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00001; ExtOp = ysyx_220053_R; wen = 1; end
                            default: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = (instr_i[30] == 1'b0) ? 5'b00101 : 5'b01101; ExtOp = ysyx_220053_R; wen = 1; end
                            //srl/sra
                        endcase
                    end
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
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = (word_t)((int64_t)src1 % (int64_t)src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2);
*/
            7'b1100011://beq
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemOp = 0; MemToReg = 0;  //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00010; ExtOp = ysyx_220053_B; Branch = 3'b100; wen = 0; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00010; ExtOp = ysyx_220053_B; Branch = 3'b101; wen = 0; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00010; ExtOp = ysyx_220053_B; Branch = 3'b110; wen = 0; end
                        3'b101: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00010; ExtOp = ysyx_220053_B; Branch = 3'b111; wen = 0; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00011; ExtOp = ysyx_220053_B; Branch = 3'b110; wen = 0; end
                        3'b111: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b00011; ExtOp = ysyx_220053_B; Branch = 3'b111; wen = 0; end
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
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 0; MemToReg = 1; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b001; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b010; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b011; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b100: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b101; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b101: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b110; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b110: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b100; ExtOp = ysyx_220053_I; wen = 1; end
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
            7'b0100011://sd
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MulOp = 0; MemWen = 1; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b001; ExtOp = ysyx_220053_S; wen = 0; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b010; ExtOp = ysyx_220053_S; wen = 0; end
                        3'b010: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b000; ExtOp = ysyx_220053_S; wen = 0; end
                        3'b011: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; MemOp = 3'b011; ExtOp = ysyx_220053_S; wen = 0; end
                        default: $display("no");
                    endcase
                end
/*
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
*/
            7'b0011011://addiw
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    case(func3)
                        3'b000: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b10000; ExtOp = ysyx_220053_I; wen = 1; end
                        3'b001: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b10001; ExtOp = ysyx_220053_I; wen = 1; end
                        default: begin ALUSrcA = 1; ALUSrcB = 1; ALUOp = (instr_i[30] == 1'b0) ? 5'b10101 : 5'b11101; ExtOp = ysyx_220053_I; wen = 1; end
                    endcase
                end
/*

  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT((src1 + src2) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT((src1 << (src2 & 0x1f)) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT(((src1 & 0xffffffff) >> (src2 & 0x1f)), 32));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT((int64_t)(((int32_t)(src1 & 0xffffffff)) >> ((uint32_t)(src2 & 0x1f))), 32));
*/
            7'b0111011://addw MulOp = 0; 
                begin
                    Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; Csrwen = 0;
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0; //wen = 1;
                    if(func7 == 7'b0000001) begin//mulw divw remw
                            case(func3)
                                3'b100: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b11010; ExtOp = ysyx_220053_R; wen = 1; end
                                3'b101: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b11011; ExtOp = ysyx_220053_R; wen = 1; end
                                3'b110: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b11100; ExtOp = ysyx_220053_R; wen = 1; end
                                3'b111: begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b11110; ExtOp = ysyx_220053_R; wen = 1; end
                                default:begin ALUSrcA = 1; ALUSrcB = 0; MulOp = 2'b00; ALUOp = 5'b11001; ExtOp = ysyx_220053_R; wen = 1; end
                            endcase//7'b0000001: begin  end
                        end
                    else begin
                        MulOp = 0;
                        case(func3)
                            3'b000: begin//addw subw mulw divw  乘除法还没做
                                    ALUSrcA = 1; ALUSrcB = 0; ExtOp = ysyx_220053_R; wen = 1; 
                                    case(func7) 
                                        7'b0100000: ALUOp = 5'b11000;
                                        default: ALUOp = 5'b10000;
                                    endcase 
                                end
                            3'b001: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = 5'b10001; ExtOp = ysyx_220053_R; wen = 1; end
                            default: begin ALUSrcA = 1; ALUSrcB = 0; ALUOp = (instr_i[30] == 1'b0) ? 5'b10101 : 5'b11101; ExtOp = ysyx_220053_R; wen = 1; end
                            //srl/sra
                        endcase
                    end
                end
/*
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT((src1 + src2) & 0xffffffff, 32));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT((src1 - src2) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT((src1 << (src2 & 0x1f)) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT(((src1 & 0xffffffff) >> (src2 & 0x1f)), 32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT((int64_t)(((int32_t)(src1 & 0xffffffff)) >> ((uint32_t)(src2 & 0x1f))), 32));
*/
            7'b1110011://ebreak, mret, ecall, csrrw, csrrc, csrrs
             	begin
                    ExtOp = ysyx_220053_I; MulOp = 0;
                    MemWen = 0; MemOp = 0; MemToReg = 0; Branch = 0;
                    case(func3)
                        3'b000: 
                            begin
                                case(instr_i[31:20])//ebreak
                                    0://ecall Epc = 1; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0;
                                    1: begin Csrwen = 0; Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 0; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000;  wen = 0; c_trap(1); end
                                    3'h302://mret
                                    default: $display("no");
                                endcase
                            end
                        3'b001://csrrw
                            begin
                                Csrwen = 1; Epc = 0; Ecall = 0; Mret = 0; CsrOp = 0; CsrToReg = 1; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; wen = 1;
                            end
                        3'b010://csrrs
                            begin
                                Csrwen = 1; Epc = 0; Ecall = 0; Mret = 0; CsrOp = 1; CsrToReg = 1; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; wen = 1;
                            end
                        3'b011://csrrc
                            begin
                                Csrwen = 1; Epc = 0; Ecall = 0; Mret = 0; CsrOp = 2; CsrToReg = 1; ALUSrcA = 1; ALUSrcB = 1; ALUOp = 5'b00000; wen = 1;
                            end
                        default: $display("no");
                    endcase
             	end
            default: $display("no, op=%x",op);
        endcase
    end
/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw   , I, {int t = CSR(src2); CSR(src2) = src1; R(dest) = t;});
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs   , I, {R(dest) = CSR(src2); CSR(src2) |= src1;});
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc   , I, {R(dest) = CSR(src2); CSR(src2) &= (~src1);});
  
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(R(17), s->pc);); // R(10) is $a0
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret  , N, s->dnpc = CSR(0x341);); //MEPC
*/
endmodule
