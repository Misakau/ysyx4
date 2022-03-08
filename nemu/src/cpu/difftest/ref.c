#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  /*if(direction == DIFFTEST_TO_DUT){
    memcpy(buf, guest_to_host(addr), n);
  } 
  else if(direction == DIFFTEST_TO_REF){
    paddr_write(addr, n, paddr_read(host_to_guest(buf), n));
  }
  else */
  Log("hh");
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  /*if(direction == DIFFTEST_TO_DUT){
    memcpy(dut, &cpu, DIFFTEST_REG_SIZE);
  } 
  else if(direction == DIFFTEST_TO_REF){
    memcpy(&cpu, dut, DIFFTEST_REG_SIZE);
  }
  else */assert(0);
}

void difftest_exec(uint64_t n) {
  //cpu_exec(n);
  assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
