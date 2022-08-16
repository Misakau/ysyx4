#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "verilated_dpi.h"

#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "color.h"
#include <getopt.h>
#include <cstring>
#include <readline/readline.h>

#include <dlfcn.h>

#include "npc_sdb.h"
#include "itrace.h"
#include "dev.h"

#define MEMSIZE 0x8000000
#define AD_BASE 0x80000000

//static long long *MEM = NULL;//8字节为单位
static long long MEM[MEMSIZE];//8字节为单位
static bool EXIT = 0;
static bool START = 0;
static FILE* log_ptr = NULL;
static uint64_t st_time = 0;//start time

static bool is_done = false;
static unsigned int instr_now = 0;
extern "C" void c_trap(const svBit done){
    is_done = done;
}

extern "C" void get_instr(unsigned int instr) {
  instr_now = instr;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

uint64_t *cpu_csr = NULL;
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  cpu_csr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

#include <sys/time.h>
extern void *vmem;
extern uint32_t *vgactl_port_base;
extern uint32_t vmem_len;
void init_vga();
void vga_update_screen();

extern "C" void pmem_read(long long raddr, long long *rdata) {
  //printf("ENTRY R\n");
  //assert(raddr & 0x7 == 0);
  if(raddr == RTC_ADDR){
    struct timeval tv;
    gettimeofday(&tv, NULL);
    *rdata = tv.tv_sec * 1000000 + tv.tv_usec - st_time;
   // printf("now time = %lld\n",(long long)*rdata);
   // printf("%llx\n",*rdata - st_time);
  }
  else if(raddr == VGACTL_ADDR){
    assert(vgactl_port_base);
    *rdata = *vgactl_port_base;
  }
  else{
    
    long long real_addr = (raddr - AD_BASE) >> 3;
    
    
    //assert(real_addr < MEMSIZE);
    if(raddr < AD_BASE || ((raddr - AD_BASE) >> 3) >= MEMSIZE){
      //if(START) EXIT = 1;//printf("addrs=%lx\n",raddr); 
      *rdata = 0;
      //printf("NONE R\n");
      return;
    }
    else *rdata = MEM[real_addr];
    if(raddr == 0x800020d1){
      printf("read addr = %llx\n",raddr);
      printf("rdata = %llx\n",MEM[real_addr]);
    }
  }
  //printf("LEAVE R\n");
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  //printf("ENTRY W\n");
  // maybe need some change
  // 没有严格8字节对齐
  //assert(raddr & 0x7 == 0);
  long long real_addr = (waddr - AD_BASE) >> 3;
  //uint64_t real_mask = -1;
  bool is_wr[8];
  //printf("wmask = %x\n",(uint8_t)wmask);
  char wm = wmask;
  for(int i = 0; i < 8; i++){
    is_wr[i] = wm & 1;
    wm >>= 1;
  }
  /*
  if(wmask == 0x1) real_mask = 0xffull;
  else if(wmask == 0x3) real_mask = 0xffffull;
  else if(wmask == 0xf) real_mask = 0xffffffffull;
  else real_mask = -1;
  */
  //assert(real_addr < MEMSIZE);
  if(waddr == SERIAL_PORT){
    //assert(real_mask == 0xff);
    printf("%c",(char)(wdata & 0xff));
  }
  else if(waddr >= VGACTL_ADDR && waddr < VGACTL_ADDR + 8*4){
    //assert(real_mask == 0xffffffffull);
    assert(vgactl_port_base);
    assert((waddr - VGACTL_ADDR)>>2 == 1);
    vgactl_port_base[(waddr - VGACTL_ADDR)>>2] = wdata;
    //printf("wdata = %lld\n",wdata);
    vga_update_screen();
  }
  else if(waddr >= FB_ADDR && waddr < FB_ADDR + vmem_len){
    assert(vmem);
   // printf("wmask = %x\n",(uint32_t)wmask);
   // printf("real_mask = %lx\n",real_mask);
   // assert(real_mask == 0xffffffffull);
    uint32_t *ptr = (uint32_t *)vmem;
    //if((waddr-FB_ADDR)>>2 == 0 || (waddr-FB_ADDR)>>2 == vmem_len - 1){
    //  printf("waddr = %llx, index = %lld\n, data = %lld\n",waddr,(waddr-FB_ADDR)>>2,wdata);
    //}
    ptr[(waddr-FB_ADDR)>>2] = wdata;
    //printf("ok\n");
  }
  else{
    //if(real_addr == 0x80000260){
    //printf("write addr = %llx, data = %llx, wmask = %x\n",waddr,wdata,(uint8_t)wmask);
    //}
    if(waddr < AD_BASE || ((waddr - AD_BASE) >> 3) >= MEMSIZE){
      //if(START) EXIT = 1;//printf("addrs=%lx\n",raddr); 
      //printf("ERROR W\n");
      return;
    }
    else{//has bug
      uint8_t *ptr = (uint8_t *)(&MEM[real_addr]);
      uint8_t *wd = (uint8_t *)(&wdata);
      for(int i = 0; i < 8; i++){
        if(is_wr[i]) ptr[i] = wd[i];
      }
      //MEM[real_addr] = (MEM[real_addr] & (~(real_mask << ((waddr & 0x7)<<3)))) | ((wdata & real_mask)<< ((waddr & 0x7)<<3));
     // printf("end\n");
      return;
    }
  }
  
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}

/////////////////////////////////////////////////////////
/*                    differtest                       */
/////////////////////////////////////////////////////////

typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
} NEMU_CPU;

/////////////////////////////////////////////////////////
/*                        sdb                          */
/////////////////////////////////////////////////////////
static VerilatedContext* sdb_contextp = NULL;
static Vtop* sdb_top = NULL;

static bool is_batch = false;
void set_batch_mode(){
    is_batch = true;
}

static void sdb_mainloop();
static bool is_diff = false;
static char pathi[] = "/home/wang/ysyx-workbench/nanos-lite/build/nanos-lite-riscv64-npc.bin";
//static char lgp[] = "/home/wang/log1.txt";
//";
static char* image_file = pathi;//NULL;
static char* log_file = NULL;
//static FILE* log_ptr = NULL;
static int npc_parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"image"    , required_argument, NULL, 'i'},
    {"log"      , required_argument, NULL, 'l'},
//    {"diff"     , no_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhi:l:d", table, NULL)) != -1) {
    switch (o) {
      case 'b': set_batch_mode(); break;
      case 'd': is_diff = true; break;
      case 'i': image_file = optarg; break;
      case 'l': log_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
    }
  }
  return 0;
}

static void print_args(int argc, char**argv){
    printf("argv:\n");
    for(int i = 0; i < argc; i++)
        printf("%s\n",argv[i]);
}
bool PASS = 0;
void (*difftest_memcpy)(uint64_t, void *, size_t, bool);
void (*difftest_regcpy)(void *, bool);
void (*difftest_exec)(uint64_t);
void (*difftest_init)();
int main(int argc, char**argv, char**env) {
    
    //MEM = (long long *)malloc(MEMSIZE);
    assert(MEM);
    void *handle = dlopen("/home/wang/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so",RTLD_LAZY);
    if(!handle){
      fprintf(stderr, "%s\n", dlerror());
      exit(1);
    }
    #ifdef ITRACE
      init_disasm("riscv64-pc-linux-gnu");
    #endif
    
    difftest_memcpy = (void(*)(uint64_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(difftest_memcpy);
    
    difftest_regcpy = (void(*)(void *, bool))dlsym(handle, "difftest_regcpy");
    assert(difftest_regcpy);
    
    difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(difftest_exec);

    difftest_init = (void(*)())dlsym(handle, "difftest_init");
    assert(difftest_init);
    
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    Vtop*top = new Vtop{contextp};
    
    npc_parse_args(argc, argv);

    //vga_init
    //init_vga();

    //sdb_init
    sdb_contextp = contextp;
    sdb_top = top;


    //print_args(argc, argv);
    int fsize = 24;
    if(image_file != NULL){//has image
        FILE* fp = fopen(image_file, "r");
        assert(fp);
        fseek(fp, 0, SEEK_END);
        fsize = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        assert(fread(MEM, fsize, 1, fp));
        fclose(fp);
        printf(ASNI_FG_BLUE "Load image in %s\n" ASNI_NONE ,image_file);
        printf("MEM[0x80000260] = %llx\n",MEM[0x260 >> 3]);
       // 7f ff 4a bc 02 58 00 00
    }
    else{//build in code
        printf(ASNI_FG_BLUE "Load build-in image\n" ASNI_NONE);
        MEM[0] = 0x0003282300000297LL;// auipc t0,0
                                      // sd  zero,16(t1)
        MEM[1] = 0x0010009301032503LL;// ld  a0,16(t1)
                                      // ld  a0,16(t1)
        MEM[2] = 0xdeadbeef00100073LL;// ebreak (used as nemu_trap)
                                      // some data
    }
    if(log_file != NULL){
      log_ptr = fopen(log_file, "w");
      assert(log_ptr);
    }
    printf(ASNI_FG_BLUE "Log is written to %s\n" ASNI_NONE ,(log_file) ? log_file : "stdout");
    
    if(is_diff){
      difftest_init();
      difftest_memcpy(AD_BASE, MEM, fsize, 1);
    }
    struct timeval stv;
    gettimeofday(&stv, NULL);
    st_time = stv.tv_sec * 1000000 +stv.tv_usec;
    printf(ASNI_FG_BLUE "start time = %lld\n" ASNI_NONE,(long long)st_time);
    //reset the pc
    contextp->timeInc(1); 
    top->clk = 0;
    top->rst = 1;
    top->eval();
    //printf("Now_pc = %016lx\n",top->pc);
    top->clk = 1;
    contextp->timeInc(1); 
    top->eval();
   // printf("Now_pc = %016lx\n",top->pc);
    top->rst = 0;
    START = 1;
    int cnt = 0;
    
    if(is_batch){
      #undef ITRACE
      int step = 0;
        NEMU_CPU nemu;
        while (!is_done && !contextp->gotFinish()) { 
            contextp->timeInc(1); 
            top->clk = !top->clk;
            
            //if(top->clk == 0)top->instr_i = pimem_read(top->pc);
            if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr);
            top->eval();
            #ifdef ITRACE
              char str[128];disassemble(str, 127, sdb_top->pc, (uint8_t*)&instr_now, 4);
              if(sdb_top->clk == 0){
                if(log_ptr == NULL) printf("pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
                //else fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
                if(log_ptr) fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
              } 
              if(sdb_top->clk == 0 && sdb_top->wb_commit == 1){
                printf("wb_commit: pc = 0x%016lx, instr = %08x\n", sdb_top->wb_pc, sdb_top->wb_instr);
                //if(log_ptr){fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);}
                if(log_ptr) fprintf(log_ptr, "wb_commit: pc = 0x%016lx, instr = %08x\n", sdb_top->wb_pc, sdb_top->wb_instr);
              } 
            #endif
            if(is_diff){
              step++;
              if(top->clk == 0 && top->wb_commit == 1){
                difftest_exec(1);
                difftest_regcpy(&nemu, 1);
                if(top->next_pc != nemu.pc){
                  printf(ASNI_FG_RED "next_PC is wrong! right: %lx, wrong: %lx at pc = %lx\n" ASNI_NONE, nemu.pc, top->next_pc, top->wb_pc);
                  printf(ASNI_FG_BLUE "Step = %d\n" ASNI_NONE,step);
                  EXIT = 1; PASS = 1;break;
                }
                for(int i = 1; i < 32; i++){
                  if(cpu_gpr[i] != nemu.gpr[i]){
                    printf(ASNI_FG_RED "gpr[%d] is wrong! right: %lx, wrong: %lx at pc = %lx\n" ASNI_NONE,i,nemu.gpr[i],cpu_gpr[i],top->wb_pc);
                    printf(ASNI_FG_BLUE "Step = %d\n" ASNI_NONE,step);
                    EXIT = 1; PASS = 1;break;
                  }
                }
              } 
            }
            if(EXIT == 1) {top->eval();break;}
        }
    }
    else{
        printf(ASNI_FG_RED "Not in batch mode!\n" ASNI_NONE);
        sdb_mainloop();
    }
    delete top;
    delete contextp;
    if(EXIT == false){
      if(cpu_gpr[10] == 0)
        printf(ASNI_FG_GREEN "HIT GOOD TRAP!" ASNI_NONE);
      else printf(ASNI_FG_RED "HIT BAD TRAP!" ASNI_NONE);
      PASS = cpu_gpr[10];
      printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,top->pc);
    }
    printf("~~~Sim finished!~~~\n");
    if(dlclose(handle) < 0){
      fprintf(stderr, "%s\n", dlerror());
      exit(1);
    }
    if(log_ptr) fclose(log_ptr);
    return PASS;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
static void npc_exec(uint64_t n){
  if(is_done || sdb_contextp->gotFinish()){
    printf("The program is done! Please quit the npc_sdb.\n");
    return;
  }
  NEMU_CPU nemu;
 /*
  #ifndef ITRACE
    #define ITRACE
  #endif
 */
  for (uint64_t i = 1; i <= 2*n && !is_done && !sdb_contextp->gotFinish(); i++) { 
            sdb_contextp->timeInc(1); 
            sdb_top->clk = !sdb_top->clk;
            //if(sdb_top->clk == 0)sdb_top->instr_i = pimem_read(sdb_top->pc);
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", sdb_top->clk, sdb_top->rst, sdb_top->pc, sdb_top->instr);
            if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); sdb_top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", sdb_top->clk, sdb_top->rst, sdb_top->pc, sdb_top->instr);
            #ifdef ITRACE
              if(instr_now == 0) return;
              char str[128];disassemble(str, 127, sdb_top->pc, (uint8_t*)&instr_now, 4);
              if(sdb_top->clk == 0){//instr to be fetch
                if(n != -1) printf("pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
                //if(log_ptr){fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);}
                if(log_ptr) fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
              }
              if(sdb_top->clk == 0 && sdb_top->wb_commit == 1){
                if(n != -1) printf("wb_commit: pc = 0x%016lx, instr = %08x\n", sdb_top->wb_pc, sdb_top->wb_instr);
                //if(log_ptr){fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);}
                if(log_ptr) fprintf(log_ptr, "wb_commit: pc = 0x%016lx, instr = %08x\n", sdb_top->wb_pc, sdb_top->wb_instr);
              } 
            #endif
            sdb_top->eval();
            if(is_diff){
              if(sdb_top->clk == 0  && sdb_top->wb_commit == 1){
                difftest_exec(1);
                difftest_regcpy(&nemu, 1);
                if(sdb_top->next_pc != nemu.pc){
                  printf(ASNI_FG_RED "next_PC is wrong! right: %lx, wrong: %lx at pc = %lx\n" ASNI_NONE, nemu.pc, sdb_top->next_pc, sdb_top->wb_pc);
                  EXIT = 1;break;
                }
                for(int i = 1; i < 32; i++){
                  if(cpu_gpr[i] != nemu.gpr[i]){
                    printf(ASNI_FG_RED "gpr[%d] is wrong! right: %lx, wrong: %lx at pc = %lx\n" ASNI_NONE,i,nemu.gpr[i],cpu_gpr[i],sdb_top->wb_pc);
                    EXIT = 1; break;
                  }
                }
              } 
              
            }
            if(EXIT == 1) {sdb_top->eval();break;}
        }
  if(is_done){
    if(cpu_gpr[10] == 0)
        printf(ASNI_FG_GREEN "HIT GOOD TRAP!" ASNI_NONE);
    else printf(ASNI_FG_RED "HIT BAD TRAP!" ASNI_NONE);
    PASS = cpu_gpr[10];
    printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,sdb_top->pc);
  }
}

static int cmd_c(char *args) {
  npc_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  EXIT = true;
  return 0;
}

static int cmd_si(char *args){
  int times = 0;
  char* com = strtok(args," ");
  if(com == NULL) times = 1;
  else{
    int len = strlen(com);
    for(int i = 0; i < len; i++){
      if(com[i] >= '0' && com[i] <= '9') times = times * 10 + com[i] - '0';
      else{
        times = 0;
        break;
      }
    }
  }
  if(times == 0) assert(0);
  else npc_exec(times);
  return 0;
}

int cmd_info(char* args){
  char* com = strtok(args," ");
  if(com == NULL) assert(0);
  int is_r = strcmp(com,"r");
  int is_w = strcmp(com,"w");
  if(is_r != 0 && is_w != 0) assert(0);
  if(is_r == 0) dump_gpr();
  return 0;
}
/*
static int cmd_x(char *args){
  char* com1 = strtok(args," ");
  char* com2 = strtok(NULL," ");
  if(com1 == NULL || com2 == NULL) Assert(0,"TOO FEW COMMANDS!");
  int num1 = npc_s_to_i(com1, 10);
  if(strlen(com2) <= 2 || com2[0] != '0' || com2[1] != 'x' ) Assert(0,"INVALID COMMANDS!");
  word_t num2 = npc_s_to_u(com2+2, 16);
  int offs = 0;
  for(int i = 1; i <= num1; i++){
    word_t dat = vaddr_read(num2+offs, 4);
    if(i == 1) printf("[0x%016lx]: \t\t", num2);
    else  printf("[0x%016lx+%d]: \t", num2, offs);
    printf("%02lx %02lx %02lx %02lx\n", dat & 0xff, (dat & 0xff00)>>8, (dat & 0xff0000)>>16, (dat & 0xff000000)>>24);
    offs+=4;
  }
  return 0;
}
*/
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "single exec", cmd_si },
  { "info", "info registers", cmd_info},
//  { "x", "scan memory", cmd_x},
  /* TODO: Add more commands */

};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop() {


  for (char *str; (str = npc_rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    if (EXIT) break;
  }
}
