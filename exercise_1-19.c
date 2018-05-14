
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
  
  while ( i < length && r >= 0 ) {

	reverse[i] = s[r];
	
	i++;
	r--;
  }

  i = 0;
  
  while ( i < length ) {

	s[i] =  reverse[i];

	i++;

  }
  
}

int main(void) {
  char s[1000];
  
  int c = 0;
  
   while ( (s[c] = getchar()) != '\n') {
    
    if ( s[c] == EOF) {
        
        return 0;
    }
        c++;
        
        }
	
        reverse(s);

        printf("%s\n\n",s);
        
        main();
}

