#include "Vtop.h"
#include "verilated.h"
#include <cstdint>

#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t MEM[MEMSIZE];//4字节为单位

uint64_t pmem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    printf("%lx\n", paddr);
    assert(real_addr < MEMSIZE);
    return MEM[real_addr];
}

int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    top->clk = 0;
    top->rst = 1;
    top->pc = 0x80000000;
    int cnt = 0;
    MEM[0] = 0x11111111;
    MEM[1] = 0x22222222;
    MEM[2] = 0x33333333;
    while (!contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        top->rst = rand()&1;
        top->instr_i = pmem_read(top->pc);
        top->eval();
        printf("cnt = %d,clk = %d, rst = %d, pc = %lx\n", cnt, top->clk, top->rst, top->pc);
    }
    delete top;
    delete contextp;
    return 0;
}