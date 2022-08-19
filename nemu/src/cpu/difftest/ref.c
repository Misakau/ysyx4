#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
  	int paddr = addr;
  	uint8_t* buff = (uint8_t*) buf;//riscv64
  	for(int i = 0; i < n; i++){
  		word_t data = buff[i];
  		paddr_write(paddr, 1, data);
  		paddr++;
  	}
  } else {
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    memcpy((CPU_state*)dut, &cpu, DIFFTEST_REG_SIZE);
  } else {
    printf("ref\n");
    memcpy(&cpu, (CPU_state*)dut, DIFFTEST_REG_SIZE);
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
  //printf("cpu.pc = %lx\n",cpu.pc);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
