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

		if ( IN_SPACES && c != ' ' && c != '\t' ) {

			putchar(c);
			IN_SPACES = 0;
		}
		
		else if ( IN_SPACES ) {

			continue;
		}

		else if ( c == '\n' && len == 0 ) {
			
			continue;

		}

		else {
			
			putchar(c);

		}
}
	return 0;
}
