#include <stdio.h>
#include <cassert>
unsigned int IMEM[20];
int main() {
  printf("Hello, ysyx!\n");
  IMEM[0] = 0x00100073;//0x00c000ef;// addi x0,x1,1
  IMEM[1] = 0x0ffff097;// auipc x1,0x0ffff
  IMEM[2] = 0xff0ff0b7;//lui x1,0xff0ff
  IMEM[3] = 0x00108093;//addi x1,x1,1
  IMEM[4] = 0x00100073;//ebreak
  IMEM[5] = 0x00100073;
  FILE* fp = fopen("a.in","w");
  assert(fp);
  fwrite(IMEM, sizeof(IMEM), 1, fp);
  fclose(fp);
  return 0;
}
