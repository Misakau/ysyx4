#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//////32 bit ARCH
#define SLOVE_PRINT(); char* po=out;const char* pf=fmt;char* ps;\
  int tot=0;int k;char cc[128];int tmp=0;char ch;char cpsch='\0';\
  size_t kx;unsigned int* poi;\
  va_list vlist;\
  va_start(vlist,fmt);\
  while(*pf!='\0'){\
    int widt=0;bool cps=false;\
    if(*pf!='%') { *po=*pf; tot++;po++;}\
    else{\
      pf++; assert(*pf!='\0');\
      if(*pf!='s'&&*pf!='d'&&*pf!='c'&&*pf!='x'){\
        if(*(pf+1)>='0'&&*(pf+1)<='9'){\
          cps=true; cpsch=*pf;pf++;\
	  while(*pf>='0'&&*pf<='9'){widt=widt*10+*pf-'0';pf++;}\
        }\
        else if(*pf>='0'&&*pf<='9'){\
          cps=true; cpsch=' ';\
	  while(*pf>='0'&&*pf<='9'){widt=widt*10+*pf-'0';pf++;}\
        }\
      }\
      switch(*pf){\
	case 's':\
	  ps=va_arg(vlist,char*);\
	  while(*ps!='\0'){\
	    *po++=*ps++;\
	    tot++;\
	  }\
	  break;\
	/*case '0': cps=true; cpsch='0';pf++;*/\
	  /*while(*pf>='0'&&*pf<='9'){widt=widt*10+*pf-'0';pf++;}*/\
        case 'd':\
          tmp=0;\
	  k=va_arg(vlist,int);\
	  if(k==0){\
	    cc[tmp++]='0';\
	  }\
	  if(k<0){*po='-';tot++;po++;k=-k;}\
	  while(k>0){\
	    cc[tmp++]=k%10+'0';k/=10;\
	  }\
	  while(tmp<widt) cc[tmp++]=(cps)?cpsch:' ';\
	  for(int i=tmp-1;i>=0;i--){*po=cc[i];po++;tot++;}\
	  break;\
	case 'c':\
	  k=va_arg(vlist,int);\
	  ch=(char)k;\
	  *po=ch;po++;tot++;break;\
	case 'x':\
	  tmp=0;\
	  kx=va_arg(vlist,unsigned int);\
	  if(kx==0){\
	    cc[tmp++]='0';\
	  }\
	  while(kx>0){\
	    if(kx%16<10) cc[tmp++]=kx%16+'0';\
	    else cc[tmp++]=kx%16-10+'a';\
	    kx/=16;\
	  }\
	  while(tmp<widt) cc[tmp++]=(cps)?cpsch:' ';\
	  for(int i=tmp-1;i>=0;i--){*po=cc[i];po++;tot++;}\
	  break;\
	case 'p':\
	  poi=va_arg(vlist,unsigned int*);\
	  kx=(size_t)poi;\
	  tmp=0;widt=8;cps=1;cpsch='0';\
	  if(kx==0){\
	    cc[tmp++]='0';\
	  }\
	  while(kx>0){\
	    if(kx%16<10) cc[tmp++]=kx%16+'0';\
	    else cc[tmp++]=kx%16-10+'a';\
	    kx/=16;\
	  }\
	  while(tmp<widt) cc[tmp++]=(cps)?cpsch:' ';\
	  for(int i=tmp-1;i>=0;i--){*po=cc[i];po++;tot++;}\
	  break;\
	default :  panic("Not implemented");\
      }\
    }\
    pf++;\
  }\
  *po='\0';\
  va_end(vlist);
int printf(const char *fmt, ...) {
  char out[2048];
  SLOVE_PRINT();
  size_t len=strlen(out);
  putstr(out);
  return len;
//  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  assert(out!=NULL);
  SLOVE_PRINT();
/*  char* po=out;const char* pf=fmt;char* ps;
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
  */
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
