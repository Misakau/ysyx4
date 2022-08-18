#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
//static uint32_t t_start=0;
uint32_t  NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  //printf("%u\n",0);
  return tv.tv_usec/1000+tv.tv_sec*1000;//-t_start;
}

int NDL_PollEvent(char *buf, int len) {
  int fd=open("/dev/events",0,0);
  size_t real_len=read(fd,buf,len);
  //printf("%s\n",buf);
  if(real_len) return 1;
  else return 0;
}

static int can_x=0,can_y=0,can_w=0,can_h=0;

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
 //printf("w=%d,h=%d\n",*w,*h);
 	//assert(0);
  if(*w==0&&*h==0){*w=screen_w;*h=screen_h;}
  can_w=*w;can_h=*h;
  can_x=(screen_w-*w)/2;
  can_y=(screen_h-*h)/2;
  assert(*w<=screen_w&&*h<=screen_h);
  //printf("w=%d,h=%d\n",can_w,can_h);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //int wide=0,high=0;//
 // printf("can_x=%d,can_y=%d\n",can_x,can_y);
  //NDL_OpenCanvas(&wide, &high);
  
  if(w==0&&h==0){w=can_w;h=can_h;}
  //assert(0);
  int fd=open("/dev/fb",0,0);
  uint32_t *fixoff=pixels+y*can_w+x;
  uint32_t scroff= ((can_y+y)*screen_w+can_x+x)*4;
  for(int i=0;i<h;i++){
    //lseek(fd,(can_y+i+y)*screen_w+can_x+x,0);
  //  printf("%d\n",scroff);  
    lseek(fd,scroff,0);
    write(fd,fixoff,w<<2);
    fixoff=fixoff+can_w;
    scroff+=screen_w*4; 
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  else{
   // struct timeval tv;
   // gettimeofday(&tv,NULL);
   // t_start=tv.tv_usec+tv.tv_sec*1000000;
    char buff[128];
    int fd=open("/proc/dispinfo",0,0);
    read(fd,buff,128);
    int tmp=0;
    while(buff[tmp]<'0'||buff[tmp]>'9') tmp++;
    screen_w=0;
    while(buff[tmp]!='\n') screen_w=screen_w*10+buff[tmp++]-'0';
    while(buff[tmp]<'0'||buff[tmp]>'9') tmp++;
    screen_h=0;
    while(buff[tmp]!='\n') screen_h=screen_h*10+buff[tmp++]-'0';
  }return 0;
}

void NDL_Quit() {
//t_start=0;
}