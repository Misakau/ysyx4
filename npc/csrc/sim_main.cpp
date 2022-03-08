#include "Vtop.h"
#include "verilated.h"
#include <cstdint>

#define MEMSIZE 65536
#define AD_BASE 0x80000000
static uint32_t IMEM[MEMSIZE];//4字节为单位

uint32_t pimem_read(uint64_t paddr){
    uint64_t real_addr = (paddr - AD_BASE) >> 2;
    assert(real_addr < MEMSIZE);
    return IMEM[real_addr];
}
bool c_trap(bool done){
    return done;
}
int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    //reset the pc
    top->clk = 0;
    top->rst = 1;
    top->eval();
    top->clk = 1;
    top->eval();
    top->rst = 0;
    int cnt = 0;
    IMEM[0] = 0x00100093;// addi x0,x1,1
    IMEM[1] = 0x00108093;// addi x1,x1,1
    IMEM[2] = 0x80108013;
    IMEM[3] = 0x80108113;
    IMEM[4] = 0x80008113;
    while (!c_trap || !contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        //top->rst = rand()&1;
        top->instr_i = pimem_read(top->pc);
        printf("cnt = %d,clk = %d, rst = %d, pc = %016lx, instr = %08x\n", cnt, top->clk, top->rst, top->pc, top->instr_i);
        top->eval();
        cnt ++;
    }
    delete top;
    delete contextp;
    return 0;
}