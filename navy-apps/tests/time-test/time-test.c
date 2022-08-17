#include <sys/time.h>
#include <stdio.h>
#include <assert.h>
int NDL_Init(uint32_t flags);
uint32_t NDL_GetTicks();

int main() {
  time_t lsec = 0;
  NDL_Init(0);
  uint32_t lms = 0; 
  while(1){
  	/*struct timeval tv;
    assert(gettimeofday(&tv,NULL) == 0);
    time_t sec = tv.tv_sec;
    if(sec > lsec){
      lsec = sec;
      printf("Time is %ld s, tv->us = %ld\n", sec, tv.tv_usec);
    }
    */
    uint32_t ms=NDL_GetTicks();
    if(ms > lms + 5000){
      lms = ms;
      printf("Time is %d\n",ms); 
    } 
  }
  return 0;
}
