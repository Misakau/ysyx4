#include <amtest.h>
#define MTIMECMP 0x2004000
Context *simple_trap(Event ev, Context *ctx) {
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      *((uint64_t *)MTIMECMP) += 7000;
      putch('t'); break;
    case EVENT_IRQ_IODEV:
      putch('d'); break;
    case EVENT_YIELD:
      putch('y'); break;
    default:
      break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");
  io_read(AM_INPUT_CONFIG);
  iset(1);
  for (volatile int j = 0; j <= 100; j++) {
    for (volatile int i = 0; i < 1000; i++) ;
    printf("j = %d\n",j);
    yield();
  }
}
