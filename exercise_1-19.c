//exercise_1-19.c
/* Write a function to

reverse(s) that reverses

the character string s.

Use it to write a program

that reverses its input a

line at a time.

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
  
   while ( (s[c] = getchar()) != EOF) {
    
    if ( s[c] == '\n') {
        
        reverse(s);

        printf("%s\n",s);
        
        
        int i = 0;
        
        while (i < 1000) {
            s[i++] = NULL;
        }
        
        
        c = 0;
        continue;
    }
  
  c++;
  } 
  
  return 0;
}
