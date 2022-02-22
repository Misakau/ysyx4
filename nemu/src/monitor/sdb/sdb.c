#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void new_wp(char *s,word_t val);
void free_wp(word_t N,int* success);
void display_wp();

void isa_reg_display();
word_t vaddr_read(vaddr_t addr, int len);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

int s_to_i(char* s, int r){
  Assert(s != NULL,"NULL!");
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
    else Assert(0,"INVALID COMMANDS!");
  }
  return num;
}

word_t s_to_u(char* s, int r){
  Assert(s != NULL,"NULL!");
  word_t num = 0;
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
    else Assert(0,"INVALID COMMANDS!");
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
  if(times == 0) Assert(0,"INVALID COMMANDS!");
  else cpu_exec(times);
  return 0;
}

int cmd_info(char* args){
  char* com = strtok(args," ");
  if(com == NULL) Assert(0,"TOO FEW COMMANDS!");
  int is_r = strcmp(com,"r");
  int is_w = strcmp(com,"w");
  if(is_r != 0 && is_w != 0) Assert(0,"INVALID COMMANDS!");
  if(is_r == 0) isa_reg_display();
  else{
    Assert(0,"NOT IMPLEMENTED!");
  }
  return 0;
}

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

static int cmd_p(char *args){
  if(args==NULL) Assert(0,"LACK EXPRESSION!");
  bool flag=true;
  word_t val=expr(args,&flag);
  if(!flag) Assert(0, "INVALID EXPRESSION!\n");
  printf("%lu\n",val);
  return 0;
}

static int cmd_w(char *args){
	if(args==NULL){
	  printf("LACK EXPRESSION!\n");
	  return 0;
	}
	bool fla=true;
	word_t NewValu=expr(args,&fla);
	if(!fla){
		printf("INVALID EXPRESSION!\n");
		return 0;
	}
	new_wp(args,NewValu);
	return 0;
}

static int cmd_d(char *args){
	if(args==NULL){
	  printf("LACK NUMBER!\n");
	  return 0;
	}
	word_t N=0;
	int l=strlen(args);
	for(int i=0;i<l;i++){
		if(args[i]<'0'||args[i]>'9'){
			printf("WRONG NUMBER!\n");
			return 0;
		}
		N=N*10+args[i]-'0';
	}
	if(N>=32){
		printf("OVERFLOW!\n");
		return 0;
	}
	int succ;
	free_wp(N,&succ);
	if(succ==0)
		printf("No watchpoint is used\n");
	else if(succ==1)
		printf("This watchpoint is already free\n");
	return 0;
}


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "single exec", cmd_si },
  { "info", "info registers and watchpoints", cmd_info},
  { "x", "scan memory", cmd_x},
  { "p", "expression compute", cmd_p},
  {"w","Create a new watchpoint",cmd_w},
  {"d","Delete the watchpoint whose number is N",cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

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

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
