#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char**argv, char**env) {
    Verilated::traceEverOn(true);
    VerilatedContext*contextp = new VerilatedContext;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    contextp->commandArgs(argc, argv);
    Vtop*top = new Vtop{contextp};
    top->trace(tfp, 99);
    while (!contextp->gotFinish()) { 
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        contextp->timeInc(1);
        top->eval();
        tfp->dump(contextp->time());
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b); 
    }
    delete top;
    delete contextp;
    delete tfp;
    return 0;
}