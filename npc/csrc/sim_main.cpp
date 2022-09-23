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
#include "axi4_mem.hpp"
#include "npc_sdb.h"
#include "itrace.h"
#include "dev.h"

#define MEMSIZE 0x8000000
#define AD_BASE 0x80000000ull

axi4_mem <32,64,4> mem(4096l*1024*1024);
axi4_ptr <32,64,4> mem_ptr;


void connect_wire(Vtop *top, axi4_ptr <32,64,4> *ptr){
    ptr->awid = &(top->axi_aw_id_o);
    ptr->awaddr = &(top->axi_aw_addr_o);
    ptr->awlen = &(top->axi_aw_len_o);
    ptr->awsize = &(top->axi_aw_size_o);
    ptr->awburst = &(top->axi_aw_burst_o);
    ptr->awvalid = &(top->axi_aw_valid_o);
    ptr->awready = &(top->axi_aw_ready_i);

    ptr->wdata = &(top->axi_w_data_o);
    ptr->wstrb = &(top->axi_w_strb_o);
    ptr->wlast = &(top->axi_w_last_o);
    ptr->wvalid = &(top->axi_w_valid_o);
    ptr->wready = &(top->axi_w_ready_i);
    
    ptr->bid = &(top->axi_b_id_i);
    ptr->bresp = &(top->axi_b_resp_i);
    ptr->bvalid = &(top->axi_b_valid_i);
    ptr->bready = &(top->axi_b_ready_o);

    ptr->arid = &(top->axi_ar_id_o);
    ptr->araddr = &(top->axi_ar_addr_o);
    ptr->arlen = &(top->axi_ar_len_o);
    ptr->arsize = &(top->axi_ar_size_o);
    ptr->arburst = &(top->axi_ar_burst_o);
    ptr->arvalid = &(top->axi_ar_valid_o);
    ptr->arready = &(top->axi_ar_ready_i);
    
    
    ptr->rid = &(top->axi_r_id_i);
    ptr->rdata = &(top->axi_r_data_i);
    ptr->rresp = &(top->axi_r_resp_i);
    ptr->rlast = &(top->axi_r_last_i);
    ptr->rvalid = &(top->axi_r_valid_i);
    ptr->rready = &(top->axi_r_ready_o);
}

//static long long *MEM = NULL;//8字节为单位
static long long MEM[MEMSIZE];//8字节为单位
bool NPC_EXIT = 0;
static bool START = 0;
static FILE* log_ptr = NULL;
uint64_t st_time = 0;//start time
static Vtop* sdb_top = NULL;
bool npc_done = false;
static unsigned int instr_now = 0;
extern "C" void c_trap(const svBit done){
    npc_done = done;
}

extern "C" void get_instr(unsigned int instr) {
  instr_now = instr;
}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


const char *regs_name[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s = 0x%lx\n", regs_name[i], cpu_gpr[i]);
  }
}

#include <sys/time.h>
extern void *vmem;
extern uint32_t *vgactl_port_base;
extern uint32_t vmem_len;
extern uint32_t *i8042_data_port_base;
void init_device();
void device_update();
void i8042_data_io_handler(uint32_t offset, int len, bool is_write);
uint64_t get_time(){
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_sec * 1000000ull + tv.tv_usec;
}
extern "C" void pmem_read(long long raddr, long long *rdata, char bytes) {
  //printf("ENTRY R\n");
  //assert(raddr & 0x7 == 0);
  if(raddr == RTC_ADDR){
    //printf("read rtc\n");
    *rdata = get_time() - st_time;
   // printf("now time = %lld\n",(long long)*rdata);
   // printf("%llx\n",*rdata - st_time);
  }
  else if(raddr == VGACTL_ADDR){
    assert(vgactl_port_base);
    *rdata = *vgactl_port_base;
  }
  else if(raddr == KBD_ADDR){
    assert(i8042_data_port_base);
    //printf("i8042_data_port_base[0] = %x\n",i8042_data_port_base[0]);
    i8042_data_io_handler(0, 4, false);
    //printf("i8042_data_port_base[0] = %x\n",i8042_data_port_base[0]);
    *rdata = i8042_data_port_base[0];
  }
  else{
    long long real_addr = (raddr - AD_BASE) >> 3;
    
    //assert(real_addr < MEMSIZE);
    if(raddr < AD_BASE || ((raddr - AD_BASE) >> 3) >= MEMSIZE){
      //if(START) NPC_EXIT = 1;//printf("addrs=%lx\n",raddr); 
      *rdata = 0;
      //printf("NONE R\n");
      return;
    }
    else{
      
      long long maddr = (raddr + bytes - 1 - AD_BASE) >> 3;
      long long ret;
      ret = MEM[real_addr];
      *rdata = ret;
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
  int bytes = 0;
  for(int i = 0; i < 8; i++){
    is_wr[i] = wm & 1;
    wm >>= 1;
    bytes += is_wr[i];
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
    fflush(stdout);
  }
  else if(waddr >= VGACTL_ADDR && waddr < VGACTL_ADDR + 8*4){
    //assert(real_mask == 0xffffffffull);
    assert(vgactl_port_base);
    uint32_t idx = (waddr - VGACTL_ADDR)>>2;
    assert(idx == 1);
    vgactl_port_base[idx] = (uint64_t)wdata >> 32;
    //vga_update_screen();
  }
  else if(waddr >= FB_ADDR && waddr < FB_ADDR + vmem_len){
    assert(vmem);
   // printf("real_mask = %lx\n",real_mask);
   // assert(real_mask == 0xffffffffull);
    uint32_t *ptr = (uint32_t *)vmem;
    //if((waddr-FB_ADDR)>>2 == 0 || (waddr-FB_ADDR)>>2 == vmem_len - 1){
    //  printf("waddr = %llx, index = %lld\n, data = %lld\n",waddr,(waddr-FB_ADDR)>>2,wdata);
    //}
    int index = (waddr-FB_ADDR)>>2;
    if(index & 1) ptr[index] = (uint64_t)wdata >> 32;
    else ptr[index] = wdata;
    //printf("ok\n");
  }
  else{
    printf(ASNI_FG_RED "Invalid MMIO address! %llx\n" ASNI_NONE,waddr);
    assert(0);
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
  uint64_t csr[4096];
} NEMU_CPU;

/////////////////////////////////////////////////////////
/*                        sdb                          */
/////////////////////////////////////////////////////////
static VerilatedContext* sdb_contextp = NULL;

static void npc_exec(uint64_t n);
static bool is_batch = false;
void set_batch_mode(){
    is_batch = true;
}
static uint64_t tot_instr = 0;
static void sdb_mainloop();
static bool is_diff = true;
static char pathi[] = "/home/wang/ysyx-workbench/nanos-lite/build/nanos-lite-riscv64-npc.bin";
//"/home/wang/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-riscv64-npc.bin";
//"/home/wang/ysyx-workbench/npc/test.bin";
//"/home/wang/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-riscv64-npc.bin";
//"/home/wang/ysyx-workbench/nanos-lite/build/nanos-lite-riscv64-npc.bin";
//"/home/wang/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin"
//static char lgp[] = "/home/wang/log1.txt";
//";pathi;//
static char* image_file = pathi;
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
      case 'd': is_diff = true; printf(ASNI_FG_BLUE "DIFFTEST" ASNI_NONE);printf(ASNI_FG_GREEN "ON\n" ASNI_NONE); break;
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
static bool commit_dev = false;
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
    init_device();
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
        mem.load_binary(image_file,0x80000000);
        printf(ASNI_FG_BLUE "Load image in %s\n" ASNI_NONE ,image_file);
       // printf("MEM[0x80000260] = %llx\n",MEM[0x260 >> 3]);
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

    connect_wire(top, &mem_ptr);
    assert(mem_ptr.check());
    axi4_ref <32,64,4> mem_ref(mem_ptr);
    axi4 <32,64,4> mem_sig;
    axi4_ref <32,64,4> mem_sig_ref(mem_sig);

    printf(ASNI_FG_GREEN "Check Complete\n" ASNI_NONE);
    
    st_time = get_time();
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
    int mem_ls = 0;//int imem_ls = 0,dmem_ls = 0;
    if(is_batch){
      npc_exec(-1);
    }
    else{
        printf(ASNI_FG_RED "Not in batch mode!\n" ASNI_NONE);
        sdb_mainloop();
    }
    delete top;
    delete contextp;
    printf("~~~Sim finished!~~~\n");
    uint64_t en_time = get_time();
    long long ms = (en_time - st_time)/1000;

    printf(ASNI_FG_BLUE "Total intructions = %lld \n" ASNI_NONE,(long long)tot_instr);

    printf(ASNI_FG_BLUE "Simulation frequency = %lld inst/s\n" ASNI_NONE,(long long)(tot_instr * 1000000/(en_time - st_time)));

    printf(ASNI_FG_BLUE "Total time = %lld ms\n" ASNI_NONE,(long long)ms);
    
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

  axi4_ref <32,64,4> sdb_mem_ref(mem_ptr);
  axi4 <32,64,4> sdb_mem_sig;
  axi4_ref <32,64,4> sdb_mem_sig_ref(sdb_mem_sig);
  if(npc_done || sdb_contextp->gotFinish()){
    printf("The program is done! Please quit the npc_sdb.\n");
    return;
  }
  NEMU_CPU nemu;
 /*
  #ifndef ITRACE
    #define ITRACE
  #endif
 */
 uint64_t mem_ls = 0;//dmem_ls = 0, imem_ls = 0;
  for (uint64_t i = 1; i <= 2*n && !npc_done && !sdb_contextp->gotFinish(); i++) { 
            sdb_contextp->timeInc(1); 
            sdb_top->clk = !sdb_top->clk;
            //if(sdb_top->clk == 0)sdb_top->instr_i = pimem_read(sdb_top->pc);
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", sdb_top->clk, sdb_top->rst, sdb_top->pc, sdb_top->instr);
            if(NPC_EXIT){printf(ASNI_FG_RED "ASSERT!\n" ASNI_NONE); sdb_top->eval();break;}
            //printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", sdb_top->clk, sdb_top->rst, sdb_top->pc, sdb_top->instr);
            #ifdef ITRACE
              //if(instr_now == 0) return;
              char str[128];disassemble(str, 127, sdb_top->pc, (uint8_t*)&(sdb_top->wb_instr), 4);
              if(sdb_top->clk == 0){//instr to be fetch
                if(n != -1) printf("pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
                //if(log_ptr){fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);}
                //if(log_ptr) fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);
              }
              if(sdb_top->clk == 0 && sdb_top->wb_commit == 1 && sdb_top->wb_pc >= 0x83000000){
                if(n != -1) printf("wb_commit: pc = 0x%016lx, instr = %08x\n", sdb_top->wb_pc, sdb_top->wb_instr);
                //if(log_ptr){fprintf(log_ptr, "pc = 0x%016lx, instr = %08x %s\n", sdb_top->pc, instr_now, str);}
                if(log_ptr) fprintf(log_ptr, "wb_commit: pc = 0x%016lx, instr = %08x %s\n", sdb_top->wb_pc, sdb_top->wb_instr, str);
              } 
            #endif
            //printf("axi_ar_addr_o = %lx\n",sdb_top->axi_ar_addr_o);
            sdb_mem_sig.update_input(sdb_mem_ref);
            sdb_top->eval();
            //printf("i = %ld, rw_req = %d, rw_valid_o = %x, rw_addr_o = %lx, d_rw_ready = %d, rw_ready_i = %d\n",i, sdb_top->rw_req_o, sdb_top->rw_valid_o,sdb_top->rw_addr_o, sdb_top->d_rw_ready,sdb_top->rw_ready_i);
            //return;
            if(sdb_top->clk == 1){
              if(sdb_mem_sig_ref.awaddr >= DEVICE_BASE && sdb_mem_sig_ref.awvalid == 1){
                pmem_write(sdb_mem_sig_ref.awaddr,sdb_mem_sig_ref.wdata,sdb_mem_sig_ref.wstrb);
              }
                
              if(sdb_mem_sig_ref.araddr == RTC_ADDR && sdb_mem_sig_ref.arvalid == 1){
                uint64_t rtc_r = get_time() - st_time;
                mem.write(RTC_ADDR,8,(uint8_t *)(&rtc_r));
              }

              if(sdb_mem_sig_ref.araddr == VGACTL_ADDR && sdb_mem_sig_ref.arvalid == 1){
                uint32_t vctr = vgactl_port_base[0];
                mem.write(VGACTL_ADDR,4,(uint8_t *)(&vctr));
              }
              mem.beat(sdb_mem_sig_ref);
            }
            //printf("[after beat] arready_i = %d\n",mem_sig.arready);
            sdb_mem_sig.update_output(sdb_mem_ref);
            if(sdb_top->clk == 0 && sdb_top->wb_commit == 1){
              tot_instr++;
              device_update();
            }

            if(is_diff){
              uint64_t nemu_last_pc = 0x80000000;
              if(sdb_top->clk == 0  && sdb_top->wb_commit == 1){
                difftest_regcpy(&nemu, 1);
                nemu_last_pc = nemu.pc;
                if(sdb_top->wb_pc == 0x00000000830188d8){
                  for (i = 0; i < 32; i++) {
                    printf("nemu_%s = 0x%lx\n", regs_name[i], nemu.gpr[i]);
                  }
                  printf("nemu_last_pc = %lx\n",nemu_last_pc);
                  break;
                }
                difftest_exec(1);
                difftest_regcpy(&nemu, 1);
                if(sdb_top->wb_dev_o == true){
                  for(int i = 1; i < 32; i++){
                    nemu.gpr[i] = cpu_gpr[i];
                  }
                  difftest_regcpy(&nemu, 0);
                }
                if(sdb_top->wb_pc != nemu_last_pc){
                  printf(ASNI_FG_RED "next_PC is wrong! right: %lx, wrong: %lx\n" ASNI_NONE, nemu_last_pc, sdb_top->wb_pc);
                  dump_gpr();
                  NPC_EXIT = 1;break;
                }
                for(int i = 1; i < 32; i++){
                  if(cpu_gpr[i] != nemu.gpr[i]){
                    printf(ASNI_FG_RED "gpr[%d] is wrong! right: %lx, wrong: %lx at pc = %lx\n" ASNI_NONE,i,nemu.gpr[i],cpu_gpr[i],sdb_top->wb_pc);
                    dump_gpr();
                    NPC_EXIT = 1; break;
                  }
                }
              } 
              
            }
            if(NPC_EXIT == 1) {sdb_top->eval();break;}
        }
  if(npc_done){
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
  NPC_EXIT = true;
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
    if (NPC_EXIT) break;
  }
}
