//exercise_1-19.c
/* Write a program to remove

trailing blanks and tabs from

each line of input, and to

delete entirely blank lines.

*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
  
  int i = 0; 
  
  const int length = strlen(s);
  
  int r = length - 1;
  
  char reverse[length];
  
  while ( reverse[i++] = s[r--]);
  
  i = 0;
  
  while ( s[i++] = reverse[i]);
  
}

int main(void) {
  char s[1000];
  
  int c = 0;
  
  while ( (s[c++] = getchar()) != EOF);

  reverse(s);

  printf("%s\n",s);
  return 0;
}
