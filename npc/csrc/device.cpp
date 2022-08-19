#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <SDL2/SDL.h>
#ifdef CONFIG_TARGET_AM
void ioe_init();
#endif
void init_vga();
void init_i8042();

void send_key(uint8_t, bool);
void vga_update_screen();

extern uint64_t st_time;
extern bool npc_done;
extern bool NPC_EXIT;
uint64_t get_time();
#define TIMER_HZ 60
// TIMER_HZ
void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time() - st_time;
  if (now - last < 100) {
    return;
  }
  last = now;
  vga_update_screen();
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_done = true;
        NPC_EXIT = true;
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
  init_vga();
  init_i8042();
}
