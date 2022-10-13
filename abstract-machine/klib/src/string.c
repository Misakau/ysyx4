#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  assert(s!=NULL);
  size_t len=0;
  while(s[len]!='\0') len++;
  return len;
 // panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  assert(dst!=NULL);assert(src!=NULL);
  char* pd=dst; const char* ps=src;
  while(*ps!='\0') *pd++=*ps++;
  *pd=*ps;
  return dst;
 // panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  assert(dst!=NULL);assert(src!=NULL);
  char* pd=dst; const char* ps=src;
  while(*pd!='\0') pd++;
  while(*ps!='\0') *pd++=*ps++;
  *pd='\0';
  return dst;
//  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  assert(s1!=NULL);
  assert(s2!=NULL);
  int fl=0;
  const char* p1=s1;const char* p2=s2;
  while(*p1!='\0'&&*p2!='\0'){
    if(*p1<*p2){ fl=-1; break; }
    if(*p1>*p2){ fl=1;break; }
    p1++;p2++;
  }
  if(fl==0){
    if(*p1!='\0') fl=1;
    else if(*p2!='\0') fl=-1;
    else fl=0;
  }
  return fl;
 // panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  assert(s1!=NULL);
  assert(s2!=NULL);
  int fl=0;
  size_t cnt = 0;
  const char* p1=s1;const char* p2=s2;
  while(cnt < n && *p1!='\0'&&*p2!='\0'){
    if(*p1<*p2){ fl=-1; break; }
    if(*p1>*p2){ fl=1;break; }
    p1++;p2++;
    cnt++;
  }
  if(cnt == n) return fl;
  if(fl==0){
    if(*p1!='\0') fl=1;
    else if(*p2!='\0') fl=-1;
    else fl=0;
  }
  return fl;
 // panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  assert(s!=NULL);
  unsigned char* p=(unsigned char* )s;
  unsigned char cc=(unsigned char) c;
  for(int i=1;i<=n;i++){ *p=cc;p++;}
  return s;
 // panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  assert(out!=NULL);
  unsigned char* p=(unsigned char*)out;const char* q=(const char*)in;
  for(int i=1;i<=n;i++) *p++=*q++;
  return out;
  //panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1!=NULL);assert(s2!=NULL);
  int fl=0;
  const char* p1=(const char*)s1; const char* p2=(const char*)s2;
  for(int i=1;i<=n;i++){
    if(*p1<*p2){ fl=-1; break; }
    if(*p1>*p2){ fl=1;break; }
    p1++;p2++;
  }
  return fl;
 // panic("Not implemented");
}

#endif
