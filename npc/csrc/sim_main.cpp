#include "Vtop.h"
#include "verilated.h"
int main(int argc, char**argv, char**env) {
    VerilatedContext*contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    
    Vtop*top = new Vtop{contextp};
    top->clk = 1;
    int cnt = 0;
    while (!contextp->gotFinish()) { 
        contextp->timeInc(1); 
        top->clk = !top->clk;
        top->rst = rand()&1;
        top->eval();
        printf("cnt = %d,clk = %d, rst = %d, pc = %lx\n", cnt, top->clk, top->rst, top->pc);
    }
    delete top;
    delete contextp;
    return 0;
}