//exercise_1-19_final.c
#include <stdio.h>
#include <string.h>
/* Write a function reverse(s) that

reverses the character string s.

Use it to write a program that 

reverses its input a line at a

time.

*/

void reverse(char *s)           {
   
   char *zero_p = s;
   
   char reverse[10000];
   
   char *reverse_s = reverse;
   
   char *reverse_p = s[strlen(s)-1];
   
   do                       { 
       
       *reverse_s++ = *reverse_p--;
   
       
   } while ( reverse_p >= zero_p );
   
   reverse_s = reverse[0];
   
  while((*zero_p++ = *reverse_s++) != '\0');
  
}



int main()
{
    char s[10000];
    
    char *s_p = s, c;
    
    while ((*s_p = getchar()) != '\n') {
        
        s_p++;
    }
    
    reverse(s);
    
    printf("%s\n", s);
    
    return 0;
}
