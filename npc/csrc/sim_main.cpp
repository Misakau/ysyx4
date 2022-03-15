#include "Vtop.h"
#include "verilated.h"
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "svdpi.h"
#include "verilated_dpi.h"
#include "color.h"
#include <getopt.h>
#include <cstring>
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

static void sdb_mainloop();

static char* image_file = NULL;

static int npc_parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"image"    , required_argument, NULL, 'i'},
//    {"diff"     , no_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhi:", table, NULL)) != -1) {
    switch (o) {
      case 'b': set_batch_mode(); break;
      //case 'd': diff_so_file = optarg; break;
      case 'i': image_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        //printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
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

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    npc_parse_args(argc, argv);

    //print_args(argc, argv);
    
    if(image_file != NULL){//has image
        FILE* fp = fopen(image_file, "r");
        assert(fp);
        fseek(fp, 0, SEEK_END);
        int fsize = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        assert(fread(IMEM, fsize, 1, fp));
        fclose(fp);
        printf(ASNI_FG_BLUE "Load image in %s\n" ASNI_NONE ,image_file);
    }
    else{//build in code
        printf(ASNI_FG_BLUE "Load build-in image\n" ASNI_NONE);
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
            if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr_i);
            top->eval();
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
      printf(ASNI_FG_BLUE " at PC = %lx\n" ASNI_NONE,top->pc);
    }
    printf("~~~Sim finished!~~~\n");
    return 0;
}

static void npc_exec(VerilatedContext* contextp, Vtop* top, uint64_t n){
  for (uint64_t i = 1; i <= n && !is_done && !contextp->gotFinish(); i++) { 
            contextp->timeInc(1); 
            top->clk = !top->clk;
            if(top->clk == 0)top->instr_i = pimem_read(top->pc);
            if(EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr_i);
            top->eval();
        }
}

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(VerilatedContext* contextp, Vtop* top, char *args) {
  npc_exec(contextp, top, -1);
  return 0;
}

static int cmd_q(VerilatedContext* contextp, Vtop* top, char *args) {
  EXIT = true;
  return 0;
}

int s_to_i(char* s, int r){
  Assert(s != NULL,"NULL!");
  int num = 0;
  int len = strlen(s);
  for(int i = 0; i < len; i++){
    if(r == 10 && s[i] >= '0' && s[i] <= '9') num = num * r + s[i] - '0';
    else if(r == 16 &&( (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F') )){
      if(s[i] >= '0' && s[i] <= '9')
        num = num * r + s[i] - '0';
      else if(s[i] >= 'a' && s[i] <= 'f')
        num = num * r + s[i] - 'a' + 10;
      else num = num * r + s[i] - 'A' + 10;
    } 
    else Assert(0,"INVALID COMMANDS!");
  }
  return num;
}

word_t s_to_u(char* s, int r){
  Assert(s != NULL,"NULL!");
  word_t num = 0;
  int len = strlen(s);
  for(int i = 0; i < len; i++){
    if(r == 10 && s[i] >= '0' && s[i] <= '9') num = num * r + s[i] - '0';
    else if(r == 16 &&( (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F') )){
      if(s[i] >= '0' && s[i] <= '9')
        num = num * r + s[i] - '0';
      else if(s[i] >= 'a' && s[i] <= 'f')
        num = num * r + s[i] - 'a' + 10;
      else num = num * r + s[i] - 'A' + 10;
    } 
    else Assert(0,"INVALID COMMANDS!");
  }
  return num;
}

static int cmd_si(VerilatedContext* contextp, Vtop* top, char *args){
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
  if(times == 0) Assert(0,"INVALID COMMANDS!");
  else npc_exec(contextp, top, times);
  return 0;
}

int cmd_info(VerilatedContext* contextp, Vtop* top, char* args){
  char* com = strtok(args," ");
  if(com == NULL) Assert(0,"TOO FEW COMMANDS!");
  int is_r = strcmp(com,"r");
  int is_w = strcmp(com,"w");
  if(is_r != 0 && is_w != 0) Assert(0,"INVALID COMMANDS!");
  if(is_r == 0) dump_gpr();
  return 0;
}
/*
static int cmd_x(VerilatedContext* contextp, Vtop* top, char *args){
  char* com1 = strtok(args," ");
  char* com2 = strtok(NULL," ");
  if(com1 == NULL || com2 == NULL) Assert(0,"TOO FEW COMMANDS!");
  int num1 = s_to_i(com1, 10);
  if(strlen(com2) <= 2 || com2[0] != '0' || com2[1] != 'x' ) Assert(0,"INVALID COMMANDS!");
  word_t num2 = s_to_u(com2+2, 16);
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
static int cmd_help(VerilatedContext* contextp, Vtop* top, char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (VerilatedContext* , Vtop* , char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "single exec", cmd_si },
  { "info", "info registers", cmd_info},
//  { "x", "scan memory", cmd_x},
  /* TODO: Add more commands */

};

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

void sdb_mainloop(VerilatedContext* contextp, Vtop* top) {
  if (is_batch_mode) {
    cmd_c(contextp, top, NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
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
        if (cmd_table[i].handler(contextp, top, args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
