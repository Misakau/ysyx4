#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "color.h"
#include <getopt.h>
#include <cstring>
#include <cassert>
#include <readline/readline.h>

void npc_exec(uint64_t n);

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  return line_read;
}

static int cmd_c(char *args) {
  npc_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  EXIT = true;
  return 0;
}

int s_to_i(char* s, int r){
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

uint64_t s_to_u(char* s, int r){
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

void sdb_mainloop() {


  for (char *str; (str = rl_gets()) != NULL; ) {
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
    if (EXIT) break;
  }
}
