#include "Vtop.h"
#include "verilated.h"
#include <cstdint>
#include "svdpi.h"
#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t IMEM[MEMSIZE];//4字节为单位

uint32_t pimem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    assert(real_addr < MEMSIZE);
    return IMEM[real_addr];
}
static bool is_done = false;
extern "C" void c_trap(const svBit done){
    is_done = done;
}
int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    //reset the pc
    top->clk = 1;
    top->eval();
    //printf("Now_pc = %016lx\n",top->pc);
    top->clk = 0;
    top->rst = 1;
    //printf("Now_pc = %016lx\n",top->pc);
    top->rst = 0;
    int cnt = 0;
    IMEM[0] = 0x7ff00093;// addi x0,x1,1
    IMEM[1] = 0x0ffff097;// auipc x1,0x0ffff
    IMEM[2] = 0xff0ff0b7;//lui x1,0xff0ff
    IMEM[3] = 0x00100073;
    IMEM[4] = 0x80008113;
    IMEM[5] = 0x00100073;
    while (!is_done && !contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        top->instr_i = pimem_read(top->pc);
        printf("Next status: clk = %d, rst = %d, pc = %016lx, instr = %08x\n", top->clk, top->rst, top->pc, top->instr_i);
        top->eval();
        printf("Now_pc = %016lx\n",top->pc);
        cnt ++;
    }
    delete top;
    delete contextp;
    printf("~~~Sim finished!~~~\n");
    return 0;
}