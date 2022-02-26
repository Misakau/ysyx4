#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  assert(out!=NULL);
  char* po=out;const char* pf=fmt;char* ps;
  int tot=0;int k;char cc[128];int tmp=0;
  va_list vlist;
  va_start(vlist,fmt);
  
  while(*pf!='\0'){
    if(*pf!='%') { *po=*pf; tot++;po++;}
    else{
      pf++; assert(*pf!='\0');
      switch(*pf){
	case 's':
	  ps=va_arg(vlist,char*);
	  while(*ps!='\0'){
	    *po++=*ps++;
	    tot++;
	  }
	  break;
        case 'd':
          tmp=0;
	  k=va_arg(vlist,int);
	  if(k==0){
	    *po='0';tot++;po++;break;
	  }
	  if(k<0){*po='-';tot++;po++;k=-k;}
	  while(k>0){
	    cc[tmp++]=k%10+'0';k/=10;
	  }
	  for(int i=tmp-1;i>=0;i--){*po=cc[i];po++;tot++;}
	  break;
	default : assert(0);
      }
    }
    pf++;
  }
  *po='\0';
  
  va_end(vlist);
  
  return tot;
  
 // panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
