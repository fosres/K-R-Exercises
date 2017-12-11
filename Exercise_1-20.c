

#include <stdio.h>

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
        for ( ; c < 8; c++)
          putchar(' ');
          continue;
      }

      for ( int i = 0 ; i < (8 - (c%8)); i++)
        putchar(' ');
        c += (8 - c%8);
      continue;

    }
    else {
      putchar(ch);
      c++;
    }




  }
    return 0;
}
