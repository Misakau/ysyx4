#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  Log("pc=%lx\nnemu_pc=%lx\n",pc,cpu.pc);
  if(pc == cpu.pc){
    for(int i = 0; i < 32; i++){
      if(ref_r->gpr[i] != cpu.gpr[i])
        return false;
      
    }
      
    return true;
  }
  return false;
}

void isa_difftest_attach() {
}
