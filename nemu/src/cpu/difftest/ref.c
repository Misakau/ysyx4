#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  /*if(direction == DIFFTEST_TO_DUT){
    memcpy((paddr_t *)buf, (paddr_t *)addr, n);
  } 
  else if(direction == DIFFTEST_TO_REF) memcpy( (paddr_t *)addr, (paddr_t *)buf, n);
  else */assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  assert(0);
}

void difftest_exec(uint64_t n) {
  assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
