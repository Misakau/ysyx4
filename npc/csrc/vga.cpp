#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>

#define SCREEN_W 400
#define SCREEN_H 300

static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

void *vmem = NULL;
uint32_t *vgactl_port_base = NULL;
uint32_t vmem_len = 0;

#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv64-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  if(vgactl_port_base[1] == 1){
    update_screen();
    vgactl_port_base[1] = 0;
  }
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
}
 
void init_vga() {
  vgactl_port_base = (uint32_t *)malloc(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();
  //add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);
  vmem = malloc(screen_size());
  //add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
  vmem_len = screen_size();
  init_screen();
  memset(vmem, 0, screen_size());
}
