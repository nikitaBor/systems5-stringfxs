#include <stdio.h>
#include <string.h>
#include "ctrings.h"

//mystrlen takes in a char pointer s and returns and int for length by counting
//  how many characters there are before NULL is reached
int mystrlen(char *s){
  int i = 0;
  while(*s++){i++;}
  return i;
}

//mystrcpy takes in two char pointers: the source from which chars are copied
//  and the dest into which chars are copied. It copies chars up to and including
//  the NULL in source
char * mystrcpy( char *dest, char *source ){
  char *dest2 = dest; //need a copy since dest will be changed
  while(*dest++ = *source++){} //sets chars in dest to value of chars in source
  return dest2; //returns to the position dest originaly pointed to
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
