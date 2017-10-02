#include <stdio.h>
#include <string.h>

int mystrlen(char *);
char * mystrcpy( char *dest, char *source );
char * mystrncat( char *dest, char *source, int n);
int mystrcmp( char *s1, char *s2 );
char * mystrchr( char *s, char c );

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

  int res = *s1 - *s2;  
  return (res > 0) - (res < 0);
}

char * mystrchr( char *s, char c ){  
  while(*s != c && *s != 0){
    s++;
  }
  
  if(!*s)
    return 0;  
  return s;  
}
 
int main(){
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
