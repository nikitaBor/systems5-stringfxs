#include <stdio.h>
#include <string.h>
#include "ctrings.h"

int mystrlen(char *s){
  int i = 0;
  while(*s++){i++;}
  return i;
}

char * mystrcpy( char *dest, char *source ){
  char *source2 = source;
  while(*dest++ = *source++){}
  return dest-mystrlen(source2)-1;
}

char * mystrncat( char *dest, char *source, int n){
  int i=0;

  while(*dest){
    dest++;
  }
  
  while(i < n && *source){
    *dest++ = *(source+i++);
  }
  
  return dest - n - 1;
}

int mystrcmp( char *s1, char *s2 ){
  while(*s1 == *s2 && *s1 > 0 && *s2 > 0){
    s1++;
    s2++;
  }
  
  return *s1 - *s2;
}

char * mystrchr( char *s, char c ){  
  while(*s != c && *s != 0){
    s++;
  }
  
  if(!*s)
    return 0;
  return s;  
}
