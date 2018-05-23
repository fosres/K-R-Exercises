#include <stdio.h>

void lower(char *s)           {

  while (*s != '\0' )     {

    if (*s == ' '|| *s == '\t' || *s == '\b' || *s == '.' || *s == '\'')  {

      printf("%c",*s);
      s++;
      continue;
    }


    //char b = (*s < 'a') ? ( (char)(*s + ('a' - 'A') ) ) : *s;
    printf( "%c", (*s < 'a') ? ( (char)(*s + ('a' - 'A') ) ) : *s );
    s++;
  }
}
int main(void) {
  lower("I Don't KNow How to Lowercase Letters.");
  return 0;
}
