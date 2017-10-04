#include <stdio.h>
#include <string.h>
#include "ctrings.h"

int main() {  
  char *s = "goodbye";
  printf("s is %s\n", s);
  printf("my length of s: %d\n", mystrlen(s));
  printf("my length of s: %d\n", mystrlen(s));
  printf("string.h length of s: %lu\n\n", strlen(s));

  char s1[256];
  printf("s is %s\n", s);
  printf("before copying to s1, s1 contains: %s\n", s1);
  mystrcpy(s1, s);
  printf("after copying to s1, s1 contains: %s\n", s1);
  printf("string.h version: %s\n\n", strcpy(s1, s));

  char s2[256] = "computer";
  printf("s is %s\n", s);
  printf("before concatenating to s2, s2 contains: %s\n", s2);
  mystrncat(s2, s, 4);
  printf("after concatenating to s2, s2 contains: %s\n", s2);
  printf("string.h version: %s\n\n", strncat(s2, s, 4));

  char *s3 = "goodbye";
  char *s4 = "friends";
  char *s5 = "goodies";
  printf("Comparing [%s] and [%s]: %d\n", s3, s, mystrcmp(s3, s));  
  printf("Comparing [%s] and [%s]: %d\n", s4, s, mystrcmp(s4, s));  
  printf("Comparing [%s] and [%s]: %d\n\n", s5, s, mystrcmp(s5, s)); 

  char c = 'o';
  char c1 = 'k';
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c, s, mystrchr(s, c));
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c1, s, mystrchr(s, c1));
}
