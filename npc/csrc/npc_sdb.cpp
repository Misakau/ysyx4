#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "color.h"
#include <getopt.h>
#include <cstring>
#include <cassert>
#include <readline/readline.h>

/* We use the `readline' library to provide more flexibility to read from stdin. */

char* npc_rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  return line_read;
}

int npc_s_to_i(char* s, int r){
  assert(s != NULL);
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
    else assert(0);
  }
  return num;
}

uint64_t npc_s_to_u(char* s, int r){
  assert(s != NULL);
  uint64_t num = 0;
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
    else assert(0);
  }
  return num;
}

/*
static int cmd_x(char *args){
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