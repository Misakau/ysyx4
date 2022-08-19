#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <SDL2/SDL.h>
void ioe_init();
void init_map();
void init_serial();
void init_timer();
void init_vga();
void init_i8042();
void init_audio();
void init_disk();
void init_sdcard();
void init_alarm();

void send_key(uint8_t, bool);
void vga_update_screen();

extern uint64_t st_time;
extern bool npc_done;
uint64_t get_time();
#define TIMER_HZ 60

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time() - st_time;
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;
  vga_update_screen();
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_done = true;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_device() {
  ioe_init();
  init_vga();
  init_i8042();
}
