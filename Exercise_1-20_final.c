
// To end use of program, press Enter to enter a new line and press Ctrl+D
#include <stdio.h>

#define n 8
int main()
{
  int c = 0;
  char ch;
  while ( (ch = getchar()) != EOF) {
    if ( ch == '\n' ) {
      c = 0;
      putchar(ch);
    }
    else if ( ch == '\t') {
      if ( c == 0){
        for ( ; c < n; c++)
          putchar(' ');
          continue;
      }

      for ( int i = 0 ; i < (n - (c%n)); i++)
        putchar(' ');
        c += (n - c%n);
      continue;

    }
    else {
      putchar(ch);
      c++;
    }




  }
    return 0;
}
