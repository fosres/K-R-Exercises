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

}
