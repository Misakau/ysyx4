#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(pc != ref_r->pc){
    Log("ref_r->pc=%lx, while nemu_r->pc=%lx\n",ref_r->pc,cpu.pc);
    return false;
  }
    

  for(int i = 0; i < 32; i++){
      if(ref_r->gpr[i] != cpu.gpr[i]){
        Log("ref_r->gpr[%d]=%lx, while nemu_r->gpr[%d]=%lx\n",i,ref_r->gpr[i],i,cpu.gpr[i]);
        return false;
      }
  }
  return true;
}

void isa_difftest_attach() {
}
