<<<<<<< HEAD
// exercise_1-19.c
/* Write a function reverse(s)
 *
 * that reverses the character
 *
 * string s. Use it to write a 
 *
 * program that reverses its
 *
 * input a line at a time.
 */

#include <stdio.h>

void reverse(char s[]) {

	int len = sizeof(s)/sizeof(char);

	char reverse[len];
	
	int i = 0, r = len - 1;

	while ( i < len ) {

		reverse[i++] = s[r--];
	}
	i = 0;

	while ( s[i++]= reverse[i] );
}
int main() {

	char s[1000];

	char *s_p = s;

	while ( ( *s_p++ = getchar()) != EOF );

	reverse(s);

	printf("%s\n",s);
	
	
	return 0;

=======
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
>>>>>>> 24c9332cefcfc0563879a55e4ab51d5baec3cfd1
}
