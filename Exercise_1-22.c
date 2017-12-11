#include <stdio.h>

#define n 8
int main(void) {

  int c = 0;
  int blank_spaces = 0;
  char ch;
  while ( (ch = getchar()) != EOF ) {
    if ( ch == '\n') {
      c = 0;
      putchar(ch);
    }
    else if (ch == ' ') {

      c++;
      blank_spaces++;
      continue;
    }
    else {
      // first make a code line that prints number of tabs and remaining blanks
      putchar(ch);
      c++;

    }


  }










return 0;
}
