#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  /*
  if(pc != ref_r->pc){
    Log("ref_r->pc=%lx, while nemu_r->pc=%lx\n",ref_r->pc,cpu.pc);
    return false;
  }
  */

  for(int i = 0; i < 32; i++){
      if(ref_r->gpr[i] != cpu.gpr[i]){
        Log("ref_r->gpr[%d]=%lx, while nemu_r->gpr[%d]=%lx\n",i,ref_r->gpr[i],i,cpu.gpr[i]);
        return false;
      }
  }
  if(ref_r->csr[0x341] != cpu.csr[0x341]){
    Log("ref_r->mepc=%lx, while nemu_r->mepc=%lx\n",ref_r->csr[0x341],cpu.csr[0x341]);
    return false;
  }
  if(ref_r->csr[0x342] != cpu.csr[0x342]){
    Log("ref_r->mcause=%lx, while nemu_r->mcause=%lx\n",ref_r->csr[0x342],cpu.csr[0x342]);
    return false;
  }
  if(ref_r->csr[0x305] != cpu.csr[0x305]){
    Log("ref_r->mtvec=%lx, while nemu_r->mtvec=%lx\n",ref_r->csr[0x305],cpu.csr[0x305]);
    return false;
  }
  if(ref_r->csr[0x300] != cpu.csr[0x300]){
    Log("ref_r->mstatus=%lx, while nemu_r->mstatus=%lx\n",ref_r->csr[0x300],cpu.csr[0x300]);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
