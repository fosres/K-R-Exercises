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
  printf("%d\n",any("Hello World","z"));
  return 0;
}
