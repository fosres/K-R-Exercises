#include <stdio.h>

void squeeze_out_char (char * s , char * c) {
  int i, j;
  
  for ( i = j = 0; s[i] != '\0'; i++)
      if (s[i] != *c)
          s[j++] = s[i];
      s[j] = '\0';
  
  
  
  
}


void squeeze_out_chars (char *s1, char *s2) {
  
  while ( *s2 != '\0')                    {
    
    squeeze_out_char(s1,s2++);
  }
  
  
  
}

int main(void) {
  char s1[] = "Hello World";
  
  char s2[] = "abcdefghijklmnopqrstuvwxyz";
  
  squeeze_out_chars(s1,s2);
  
  printf("%s\n",s1);
  return 0;
}
