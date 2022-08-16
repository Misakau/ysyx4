#include <isa.h>

#define MSTATUS   0x300
#define MTVEC     0x305
#define MSCRATCH  0x340
#define MEPC      0x341
#define MCAUSE    0x342

#define MIE  0x8
#define MPIE 0x80
#define MPP 0x1800
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[MEPC] = epc;
  cpu.csr[MCAUSE] = NO;
  //cpu.csr[MSTATUS] |= MPP;
 // cpu.csr[MSTATUS] &= ~MPIE;
  //cpu.csr[MSTATUS] |= (cpu.csr[MSTATUS] & MIE) << 4;
  return cpu.csr[MTVEC];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
