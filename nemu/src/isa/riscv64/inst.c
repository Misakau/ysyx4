#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define MIE  0x8
#define MPIE 0x80
#define MPP 0x1800

#define R(i) gpr(i)
#define CSR(i) csr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B,
  TYPE_N, // none
};

int func_entry(uint64_t addr);
int func_leave(uint64_t addr, uint64_t pc);
void log_func(int func, bool flag);

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1); }
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) <<12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1); }

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); break;
    case TYPE_R: src1R(rs1);     src2R(rs2); break;
    case TYPE_B: destI(immB(i)); src1R(rs1); src2R(rs2);break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int64_t)src1 < (int64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int64_t)src1 >= (int64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = ((uint64_t)src1 < (uint64_t)src2) ? (dest + s->pc) : s->snpc);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = ((uint64_t)src1 >= (uint64_t)src2) ? (dest + s->pc) : s->snpc);

  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));

  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));

  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = ( (int64_t)src1 < (int64_t)src2 ));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = ( (uint64_t)src1 < (uint64_t)src2 ));
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = (src1 ^ src2));
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = (src1 | src2));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = (src1 & src2));  
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (src1 << (src2 & 0x3f)));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (src1 >> (src2 & 0x3f)));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (word_t)((int64_t)src1 >> (src2 & 0x3f)));

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << (src2 & 0x3f));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ( (int64_t)src1 < (int64_t)src2 ));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = ( (uint64_t)src1 < (uint64_t)src2 ));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = (src1 >> (src2 & 0x3f)));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = (word_t)((int64_t)src1 >> (src2 & 0x3f)));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);

  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, {s->dnpc = (src1 + src2)&0xfffffffffffffffe;
                                                                 R(dest) = s->snpc;
                                                                 #ifdef CONFIG_FTRACE
                                                                 log_func(func_entry(s->dnpc),0);
                                                                 log_func(func_leave(s->dnpc, s->pc),1);
                                                                 #endif
                                                                });
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, {s->dnpc = src1 + s->pc;
                                                                 R(dest) = s->snpc;
                                                                 #ifdef CONFIG_FTRACE
                                                                 log_func(func_entry(s->dnpc),0);
                                                                 log_func(func_leave(s->dnpc, s->pc),1);
                                                                 #endif
                                                                 });

  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT((src1 + src2) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT((src1 << (src2 & 0x1f)) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT(((src1 & 0xffffffff) >> (src2 & 0x1f)), 32));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT((int64_t)(((int32_t)(src1 & 0xffffffff)) >> ((uint32_t)(src2 & 0x1f))), 32));

  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT((src1 + src2) & 0xffffffff, 32));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT((src1 - src2) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT((src1 << (src2 & 0x1f)) & 0xffffffff, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT(((src1 & 0xffffffff) >> (src2 & 0x1f)), 32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT((int64_t)(((int32_t)(src1 & 0xffffffff)) >> ((uint32_t)(src2 & 0x1f))), 32));

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (word_t)(src1 * src2));
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(dest) = (word_t)(((__int128_t)((__int128_t)src1 * (__int128_t)src2)) >> 64));
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(dest) = (word_t)(((__int128_t)( (__uint128_t)( ((int64_t)src1 >= 0) ? src1 : -src1 ) * (__uint128_t)src2 ) * (((int64_t)src1 >= 0) ? 1 : -1)) >> 64));
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(dest) = (word_t)(((__int128_t)((__uint128_t)src1 * (__uint128_t)src2)) >> 64));
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (word_t)((int64_t)src1 / (int64_t)src2));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = (word_t)((int64_t)src1 % (int64_t)src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2);

  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT((int32_t)(((int32_t)(src1 & 0xffffffff) * (int32_t)(src2 & 0xffffffff)) & 0xffffffff), 32));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT((int32_t)(((int32_t)(src1 & 0xffffffff) / (int32_t)(src2 & 0xffffffff)) & 0xffffffff), 32));
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  , R, R(dest) = SEXT((int32_t)(((uint32_t)(src1 & 0xffffffff) / (uint32_t)(src2 & 0xffffffff)) & 0xffffffff), 32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT((int32_t)(((int32_t)(src1 & 0xffffffff) % (int32_t)(src2 & 0xffffffff)) & 0xffffffff), 32));
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = SEXT((int32_t)(((uint32_t)(src1 & 0xffffffff) % (uint32_t)(src2 & 0xffffffff)) & 0xffffffff), 32));

  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw   , I, {int t = CSR(src2); CSR(src2) = src1; R(dest) = t;});
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs   , I, {R(dest) = CSR(src2); CSR(src2) |= src1;});
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc   , I, {R(dest) = CSR(src2); CSR(src2) &= (~src1);});
  
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(11, s->pc);); // R(10) is $a0
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret  , N, {
                                                                  s->dnpc = CSR(0x341);
                                                                  CSR(0x300) &= ~MPP;
                                                                  //CSR(0x300) |= MPIE;
                                                                  //CSR(0x300) |= (CSR(0x300) & MPIE) >> 4;
                                                                }); //MEPC
  INSTPAT("0000000 00000 00000 001 00000 00011 11", fencei , I, );                                                          
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();
//0011000 00010 00000 000 00000 1110011
  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}