#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static void sh_handle_cmd(const char *cmd) {
  char* cmd_p=(char*)cmd;
  char* c_name=strtok(cmd_p," \n");
  if (c_name==NULL) return;
  else if(!strcmp(c_name,"echo")){
    char* str=strtok(NULL," ");
    sh_printf("%s",str);
  }
  else if(!strcmp(c_name,"exit")){
    exit(0);
  }
  else{
    char* c_args=strtok(NULL," \n");
    char* args[]={c_name,c_args,NULL};
    char* envp[]={NULL};
      int ret=execvp(c_name,args);
    if(ret==-1){
      if(c_name[0]=='/'){
          if(execve(c_name,args,envp)==-1) sh_printf("No such file \"%s\"\n",c_name);
        }
        else sh_printf("No such command \"%s\"\n",c_name);
    }
  }
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  setenv("PATH", "/bin:/usr/bin", 0);
  
  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
