#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
 // yield();
  int buf_size=strlen(buf);
  if(len<buf_size) buf_size=len;
  for(int i=0;i<buf_size;i++) putch(*(((char*)buf)+i));
  return len;
   //return 0;
}
size_t events_read(void *buf, size_t offset, size_t len) {
  //yield();
  AM_INPUT_KEYBRD_T ev=io_read(AM_INPUT_KEYBRD);
  bool isdown=ev.keydown;
  int code=ev.keycode;
  if(code==0) return 0;
  memset(buf,0,sizeof(buf));///actually, sizeof(buf) is only 4 bytes;
  if(isdown){ 
    strcat(buf,"kd ");
  }
  else strcat(buf,"ku ");
  strcat(buf,keyname[code]);
  strcat(buf,"\n");
  
  return strlen(buf);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T gpu=io_read(AM_GPU_CONFIG);
  char* buff=buf;
  buff[0]='\0';
  strcat(buff,"WIDTH:");
  int k=gpu.width,tmpn=0,lbuf=0;char tmp[64];
  if(k==0) strcat(buff,"0\n");
  else{
    while(k){
      tmp[tmpn++]=k%10+'0';
      k/=10;
    }
    lbuf=strlen(buff);
    for(int i=tmpn-1;i>=0;i--) buff[lbuf++]=tmp[i];
    buff[lbuf]='\0';
    strcat(buff,"\n");
  }
  k=gpu.height;tmpn=0;
  strcat(buff,"HEIGHT:");
  if(k==0) strcat(buff,"0\n");
  else{
    while(k){
      tmp[tmpn++]=k%10+'0';
      k/=10;
    }
    lbuf=strlen(buff);
    for(int i=tmpn-1;i>=0;i--) buff[lbuf++]=tmp[i];
    buff[lbuf]='\0';
    strcat(buff,"\n");
  }
  //Log("%p",buf);
  return strlen(buff);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
 // yield();
  AM_GPU_CONFIG_T gpu=io_read(AM_GPU_CONFIG);
  int wi=gpu.width;
  int x,y;
  y=offset/4/wi; x=offset/4%wi;
 // printf("x=%d,y=%d\n",x,y);
  io_write(AM_GPU_FBDRAW, x, y, (uint32_t*)buf, len>>2, 1, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}