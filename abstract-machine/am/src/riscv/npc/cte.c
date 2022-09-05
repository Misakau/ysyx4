#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("mcause = %d\n",c->mcause);
    switch (c->mcause) {
      case 0x8000000000000007:
        ev.event = EVENT_IRQ_TIMER;break;
      case 11:
        if(c->GPR1 == -1) ev.event = EVENT_YIELD;
        else if(c->GPR1 >= 0 && c->GPR1 <= 19) ev.event = EVENT_SYSCALL;
        else ev.event = EVENT_ERROR;
        c->mepc += 4;
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1\n ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  if(enable){
    asm volatile("csrsi mstatus, 8\n");
    asm volatile("addi t0, x0, 128\n");
    asm volatile("csrs mie, t0\n");
  }
  else{
    asm volatile("csrci mstatus, 8\n");
    asm volatile("addi t0, x0, 128\n");
    asm volatile("csrc mie, t0\n");
  }
}
