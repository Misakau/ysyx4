#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  CPU_state dut_r;
  ref_difftest_regcpy(&dut_r, DIFFTEST_TO_DUT);
  if(pc == dut_r.pc){
    for(int i = 0; i < 32; i++){
      if(ref_r->gpr[i] != dut_r.gpr[i]){
        Log("ref_r->gpr[%d]=%lx, while nemu_r->gpr[%d]=%lx\n",i,ref_r->gpr[i],i,dut_r.gpr[i]);
        return false;
      }
        
      
    }
      
    return true;
  }
  Log("pc=%lx, while nemu_pc=%lx\n", pc, dut_r.pc);
  return false;
}

void isa_difftest_attach() {
}
