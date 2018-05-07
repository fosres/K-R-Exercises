// exercise_1-18.c
/* Write a program to remove trailing blanks
 *
 * and tabs from each line of input, and to
 *
 * delete entirely blank lines.
 *
 */

#include <stdio.h>
#include <stdbool.h>
int main() {

	int len;
	char c;
	bool IN_SPACES = 0;

	while ( (c = getchar() ) != EOF ) {

		len++;

		if ( !IN_SPACES && c != ' ' && c != '\t' ) {

			putchar(c);
		}
		
		else if ( IN_SPACES && c != ' ' && c != '\t' ) {

			putchar(c);
			
			IN_SPACES = 0;
		}
		
		else if ( !IN_SPACES && (c == ' ' || c == '\t') ) {
			
			putchar(c);
			IN_SPACES = 1;

		}

		else if ( IN_SPACES && (c == ' ' || c == '\t') ) {
			
			continue;

		}
		/*
		else if ( c == '\n' && len == 1 ) {
			
			continue;

		}
*/
		else { // in a word
			
			putchar(c);
			IN_SPACES = 0;

		}
}
	return 0;
}
