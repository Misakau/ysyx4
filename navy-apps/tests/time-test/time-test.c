#include <sys/time.h>
#include <stdio.h>
#include <assert.h>
//int NDL_Init(uint32_t flags);
//uint32_t NDL_GetTicks();

int main() {
  time_t lsec = 0;
  //NDL_Init(0);
  while(1){
  	struct timeval tv;
    assert(gettimeofday(&tv,NULL));
    time_t sec = tv.tv_sec;
    if(sec > lsec){
      lsec = sec;
      printf("Time is %ld s, tv->us = %ld\n", sec, tv.tv_usec);
    }
    
    //uint32_t timeus=NDL_GetTicks();
    //if(timeus%500000<=10) 
    //printf("Time is %d\n",timeus); 
  }
  return 0;
}
