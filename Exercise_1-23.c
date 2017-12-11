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
printf("\nNew C Code:\n");
  if ( c > 2) {
    for ( int i = 0; i < c; ) {
      if ( input[i] == '/' && input[i+1] == '/') {
        for ( ; input[i] != '\n'; i++);

        continue;
      }
      else if ( input[i] == '/' && input[i+1] == '*') {
        for ( ; !(input[i] == '*' && input[i+1] == '/'); ) // !input[i] != '*' || !input[i] != '/'
          i++;

        i += 2;
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

printf("\n");
return 0;
}
