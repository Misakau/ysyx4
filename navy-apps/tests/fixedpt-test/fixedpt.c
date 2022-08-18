#include <fixedptc.h>
#include <stdio.h>

int main() {
  printf("5*6=%d,-5*6=%d,-5*-6=%d,1.25*2=%d,-1.25*-2=%d,-1.25*2=%d\n",
  fixedpt_toint(fixedpt_muli(fixedpt_fromint(5),6)),
  fixedpt_toint(fixedpt_muli(fixedpt_fromint(-5),6)),
  fixedpt_toint(fixedpt_muli(fixedpt_fromint(-5),-6)),
  fixedpt_toint(fixedpt_muli(fixedpt_rconst(1.25),2)),
  fixedpt_toint(fixedpt_muli(fixedpt_rconst(-1.25),-2)),
  fixedpt_toint(fixedpt_muli(fixedpt_rconst(-1.25),2)));
  
  printf("6/5=%d,6/-5=%d,5/6=%d,-5/6=%d,-5/-6=%d,1.25/2=%d,-1.25/-2=%d,-1.25/2=%d\n",
  fixedpt_toint(fixedpt_divi(fixedpt_fromint(6),5)),
  fixedpt_toint(fixedpt_divi(fixedpt_fromint(6),-6)),
  fixedpt_toint(fixedpt_divi(fixedpt_fromint(5),6)),
  fixedpt_toint(fixedpt_divi(fixedpt_fromint(-5),6)),
  fixedpt_toint(fixedpt_divi(fixedpt_fromint(-5),-6)),
  fixedpt_toint(fixedpt_divi(fixedpt_rconst(1.25),2)),
  fixedpt_toint(fixedpt_divi(fixedpt_rconst(-1.25),-2)),
  fixedpt_toint(fixedpt_divi(fixedpt_rconst(-1.25),2)));
  
  printf("5*6=%d,-5*6=%d,-5*-6=%d,1.5*2=%d,1.5*1.5=%d,-1.5*1.5=%d\n",
  fixedpt_toint(fixedpt_mul(fixedpt_fromint(5),fixedpt_fromint(6))),
  fixedpt_toint(fixedpt_mul(fixedpt_fromint(-5),fixedpt_fromint(6))),
  fixedpt_toint(fixedpt_mul(fixedpt_fromint(-5),fixedpt_fromint(-6))),
  fixedpt_toint(fixedpt_mul(fixedpt_fromint(2),fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_mul(fixedpt_rconst(1.5),fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_mul(fixedpt_rconst(-1.5),fixedpt_rconst(1.5))));
  
  printf("6/5=%d,6/-5=%d,5/6=%d,-5/6=%d,-5/-6=%d,1.5/2=%d,1.5/1.5=%d,-1.5/1.5=%d\n",
  fixedpt_toint(fixedpt_div(fixedpt_fromint(6),fixedpt_fromint(5))),
  fixedpt_toint(fixedpt_div(fixedpt_fromint(6),fixedpt_fromint(-5))),
  fixedpt_toint(fixedpt_div(fixedpt_fromint(5),fixedpt_fromint(6))),
  fixedpt_toint(fixedpt_div(fixedpt_fromint(-5),fixedpt_fromint(6))),
  fixedpt_toint(fixedpt_div(fixedpt_fromint(-5),fixedpt_fromint(-6))),
  fixedpt_toint(fixedpt_div(fixedpt_rconst(1.5),fixedpt_fromint(2))),
  fixedpt_toint(fixedpt_div(fixedpt_rconst(1.5),fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_div(fixedpt_rconst(-1.5),fixedpt_rconst(1.5))));
  
  printf("abs(6)=%d,abs(-5)=%d,abs(1.5)=%d,abs(-1.5)=%d\n",
  fixedpt_toint(fixedpt_abs(fixedpt_fromint(6))),
  fixedpt_toint(fixedpt_abs(fixedpt_fromint(-5))),
  fixedpt_toint(fixedpt_abs(fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_abs(fixedpt_rconst(-1.5))));
  
  printf("floor(-1.5)=%d,floor(1.5)=%d,floor(-1)=%d,floor(1)=%d\n",
  fixedpt_toint(fixedpt_floor(fixedpt_rconst(-1.5))),
  fixedpt_toint(fixedpt_floor(fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_floor(fixedpt_rconst(-1))),
  fixedpt_toint(fixedpt_floor(fixedpt_rconst(1))));
  
  printf("ceil(-1.5)=%d,ceil(1.5)=%d,ceil(-1)=%d,ceil(1)=%d\n",
  fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-1.5))),
  fixedpt_toint(fixedpt_ceil(fixedpt_rconst(1.5))),
  fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-1))),
  fixedpt_toint(fixedpt_ceil(fixedpt_rconst(1))));
  return 0;
}
