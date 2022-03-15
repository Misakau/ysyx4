#include "Vtop.h"
#include "verilated.h"
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "svdpi.h"
#include "verilated_dpi.h"
#include "color.h"
#include <getopt.h>

#define MEMSIZE 65536
#define AD_BASE 0x80000000

static uint32_t IMEM[MEMSIZE];//4字节为单位
static bool EXIT = 0;
uint32_t pimem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    //assert(real_addr < MEMSIZE);
    if(real_addr >= MEMSIZE){EXIT = 1;printf("addrs=%lx\n",paddr);return 0;}
    return IMEM[real_addr];
}
static bool is_done = false;

extern "C" void c_trap(const svBit done){
    is_done = done;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}
/////////////////////////////////////////////////////////
/*                        sdb                          */
/////////////////////////////////////////////////////////
static bool is_batch = false;
void set_batch_mode(){
    is_batch = true;
}

static int npc_parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
//    {"diff"     , no_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bh", table, NULL)) != -1) {
    switch (o) {
      case 'b': set_batch_mode(); break;
      //case 'd': diff_so_file = optarg; break;
      case 1: printf("val = 1\n");
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        //printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
    }
  }
  return 0;
}

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    npc_parse_args(argc, argv);

    printf("argv:\n");
    for(int i = 0; i < argc; i++)
        printf("%s\n",argv[i]);
    if(argc > 2){//has image
        FILE* fp = fopen(argv[2], "r");
        assert(fp);
        fseek(fp, 0, SEEK_END);
        int fsize = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        assert(fread(IMEM, fsize, 1, fp));
        fclose(fp);
    }
    else{//build in code
        IMEM[0] = 0x00c000ef;// addi x0,x1,1
        IMEM[1] = 0x0ffff097;// auipc x1,0x0ffff
        IMEM[2] = 0xff0ff0b7;//lui x1,0xff0ff
        IMEM[3] = 0x00108093;//addi x1,x1,1
        IMEM[4] = 0x00100073;
        IMEM[5] = 0x00100073;
    }
    Vtop*top = new Vtop{contextp};
    //reset the pc
    contextp->timeInc(1); 
    top->clk = 0;
    top->rst = 1;
    top->eval();
    //printf("Now_pc = %016lx\n",top->pc);
    top->clk = 1;
    contextp->timeInc(1); 
    top->eval();
    //printf("Now_pc = %016lx\n",top->pc);
    top->rst = 0;
    int cnt = 0;
    if(is_batch)
        while (!is_done && !contextp->gotFinish()) { 
            contextp->timeInc(1); 
            top->clk = !top->clk;
            if(top->clk == 0)top->instr_i = pimem_read(top->pc);
            if(EXIT){printf("ASSERT!\n"); top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr_i);
            top->eval();
            cnt ++;
        }
    else{
        printf(ASNI_BG_RED "Not in batch mode!\n" ASNI_NONE);
        assert(0);
    }
    delete top;
    delete contextp;
    if(cpu_gpr[10] == 0)
        printf(ASNI_FG_GREEN "GOOD TRAP!" ASNI_NONE);
    else printf(ASNI_FG_RED "BAD TRAP!" ASNI_NONE);
    printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,top->pc);
    printf("~~~Sim finished!~~~\n");
    return 0;
}