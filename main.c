#include <stdio.h>
#include <string.h>
#include "ctrings.h"

int main() {
  char *s = "goodbye";
  printf("\n--- Testing mystrlen(s) ---\n");
  printf("s is [%s]\n", s);
  printf("mystrlen(s): %d\n", mystrlen(s));
  printf("strlen(s): %lu\n\n", strlen(s));

  char s1[32];
  printf("--- Testing mystrcopy(s, s1) ---\n");  
  printf("s1 is [%s]\n", s1);  
  mystrcpy(s1, s);
  printf("s1 after mystrcpy(s1, s): [%s]\n", s1);
  memset(&s1[0], 0, sizeof(s1)); // CLEARS array s1  
  strcpy(s1, s);
  printf("s1 after strcpy(s1, s): [%s]\n\n", s1);

  char s2[32] = "computer", s6[32] = "computer";
  printf("--- Testing mystrncat(s, s1, n) ---\n");    
  printf("s2 is [%s]\n", s2);
  printf("s6 is [%s]\n", s6);
  mystrncat(s2, s, 4);
  printf("s2 after mystrncat(s2, s, 4): [%s]\n", s2);    
  strncat(s6, s, 4);
  printf("s6 after strncat(s6, s, 4): [%s]\n\n", s6);

  printf("--- Testing mystrcmp(s, s1) ---\n");
  char *s3 = "goodbye";
  char *s4 = "friends";
  char *s5 = "goodies";
  printf("Comparing [%s] and [%s]: %d\n", s3, s, mystrcmp(s3, s));  
  printf("Comparing [%s] and [%s]: %d\n", s4, s, mystrcmp(s4, s));  
  printf("Comparing [%s] and [%s]: %d\n", s5, s, mystrcmp(s5, s));
  printf("Comparing [%s] and [%s] using standard: %d\n", s3, s, strcmp(s3, s));  
  printf("Comparing [%s] and [%s] using standard: %d\n", s4, s, strcmp(s4, s));  
  printf("Comparing [%s] and [%s] using standard: %d\n\n", s5, s, strcmp(s5, s));

  printf("--- Testing mystrchr(s, c) ---\n");
  char c = 'o';
  char c1 = 'k';
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c, s, mystrchr(s, c));
  printf("Substring starting from letter '%c' of \"%s\" is \"%s\"\n", c1, s, mystrchr(s, c1));
  printf("Substring starting from letter '%c' of \"%s\" using standard is \"%s\"\n", c, s, strchr(s, c));
  printf("Substring starting from letter '%c' of \"%s\" using standard is \"%s\"\n", c1, s, strchr(s, c1));
}
