#include <stdio.h>
#include <string.h>
#include "ctrings.h"

int main() {
  printf("Testing mystrlen(s)\n");
  char *s = "goodbye";
  printf("s is [%s]\n", s);  
  printf("My length of s: %d\n", mystrlen(s));
  printf("Length of s using standard: %lu\n\n", strlen(s));

  printf("Testing mystrcopy(s, s1)\n");
  char s1[256];
  printf("s is [%s]\n", s);
  printf("Before copying, s1 contains: [%s]\n", s1);
  mystrcpy(s1, s);
  printf("After copying, s1 contains: [%s]\n", s1);
  printf("After copying using standard: [%s]\n\n", strcpy(s1, s));

  printf("Testing mystrncat(s, s1, s2)\n");
  char s2[256] = "computer";
  printf("s is [%s]\n", s);
  printf("Before concatenation, s2 contains: [%s]\n", s2);
  mystrncat(s2, s, 4);
  printf("After concatenation, s2 contains: [%s]\n", s2);
  printf("After concatenation using standard: [%s]\n\n", strncat(s2, s, 4));

  printf("Testing mystrcmp(s, s1)\n");
  char *s3 = "goodbye";
  char *s4 = "friends";
  char *s5 = "goodies";
  printf("Comparing [%s] and [%s]: %d\n", s3, s, mystrcmp(s3, s));  
  printf("Comparing [%s] and [%s]: %d\n", s4, s, mystrcmp(s4, s));  
  printf("Comparing [%s] and [%s]: %d\n", s5, s, mystrcmp(s5, s));
  printf("Comparing [%s] and [%s] using standard: %d\n", s3, s, strcmp(s3, s));  
  printf("Comparing [%s] and [%s] using standard: %d\n", s4, s, strcmp(s4, s));  
  printf("Comparing [%s] and [%s] using standard: %d\n\n", s5, s, strcmp(s5, s));

  printf("Testing mystrchr(s, c)\n");
  char c = 'o';
  char c1 = 'k';
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c, s, mystrchr(s, c));
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c1, s, mystrchr(s, c1));
  printf("Substring starting from letter '%c' of \"%s\" using standard is \"%s\"\n", c, s, strchr(s, c));
  printf("Substring starting from letter '%c' of \"%s\" using standard is \"%s\"\n", c1, s, strchr(s, c1));
}
