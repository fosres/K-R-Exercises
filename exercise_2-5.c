//exercise_2-5.c

#include <stdio.h>
#include <string.h>

int any(char *s1, char * s2)                {
  
  int f_char = strcspn(s1,s2);
  
  if (f_char == strlen(s1))       {
    
    return -1;
  }
  
  return f_char;
  
}

int main(void) {
  printf("Index of first matching char in s1 that is ANYWHERE in s2 is: %d\n",any("Hello World","abcfghijkmnpqstuvwxyz"));
  return 0;
}
