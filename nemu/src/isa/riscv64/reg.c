#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static int regsn = sizeof(regs)/sizeof(const char*); 

void isa_reg_display() {
  bool b;
  for(int i = 0; i < regsn; i++){
    printf("%s: \t0x%016lx\n", regs[i], isa_reg_str2val(regs[i], &b));
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  for(int i = 0; i < regsn; i++){
    if(strcmp(s,regs[i]) == 0){
      if(i < 32){
        *success = true;
        return cpu.gpr[i];
      }
      else Assert(0,"NOT GPRS!");
    }
  }
  *success = false;
  return 0;
}
