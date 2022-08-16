#include <common.h>
#include "syscall.h"

static size_t sys_write(int fd, const void *buf, size_t count);
static int sys_brk(void *addr);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_exit:  printf("exit\n"); halt(a[1]); break;
    case SYS_yield: yield(); c->GPRx = 0; break;
    case SYS_write: c->GPRx = sys_write((int)a[1],(const void *)a[2],(size_t)a[3]); break;
    case SYS_brk:   c->GPRx = sys_brk((void *)a[1]); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

static size_t sys_write(int fd, const void *buf, size_t count){
  printf("fd = %d\n",fd);
  assert(fd == 1 || fd == 2);
  uint8_t *ptr = (uint8_t *)buf;
  for(int i = 0; i < count; i++)
    putch(ptr[i]);
  return count;
}

static int sys_brk(void *addr){
  return 0;
} 