#include <stdio.h>

char input[1000000];
int main(void) {

  int c = 0;
  char ch;
  while ((ch = getchar()) != EOF  ) {
    input[c] = ch;
    c++;
    }
  input[c] = ch;
printf("New C Code:\n");
  if ( c > 2) {
    for ( int i = 0; i != c - 1; ) {
      if ( input[i] == '/' && input[i+1] == '/') {
        for ( ; input[i] != '\n'; i++);

        continue;
      }
      else if ( input[i] == '/' && input[i+1] == '*') {
        for ( ; input[i] != '*' && input[i+1] != '/'; i++);

        continue;
      }

      putchar(input[i]);
      i++;
    }



  }
  else {
    for ( int i = 0; i < c; i++)
      putchar(input[i]);
  }



}
