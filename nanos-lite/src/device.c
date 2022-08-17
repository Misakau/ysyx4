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
  char *str = (char *)buf;
  for(int i = 0; i < len; i++)
    putch(str[i]);
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  char *str = buf;
  AM_INPUT_KEYBRD_T ev=io_read(AM_INPUT_KEYBRD);
  bool isdown = ev.keydown;
  int code = ev.keycode;
  if(code == 0) return 0;
  str[0] = 0;
  if(isdown) strcat(buf,"kd ");
  else strcat(buf,"ku ");
  strcat(buf,keyname[code]);
  strcat(buf,"\n");
  int ret = strlen(buf);
  assert(ret <= len);
  return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T gpu = io_read(AM_GPU_CONFIG);
  sprintf(buf, "WIDTH:%d\nHEIGHT:%d\n", gpu.width, gpu.height);
  int ret = strlen(buf);
  assert(ret <= len);
  return ret;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T gpu = io_read(AM_GPU_CONFIG);
  size_t pix = offset >> 2;
  printf("offset = %d\n",offset);
  int wi = gpu.width;
  int x, y;
  y = pix / wi; x = pix % wi;
  printf("x=%d,y=%d\n",x,y);
  io_write(AM_GPU_FBDRAW, x, y, (uint32_t*)buf, len >> 2, 1, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
