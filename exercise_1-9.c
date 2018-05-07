// exercise_1-9.c
/* Write a program to copy its input
 * 
 * to its output, replacing each 
 *
 * string of one or more blanks by
 *
 * a single blank.
 */
#include <stdio.h>
#include <stdbool.h>
int main() {

	bool IN_BLANKS = 0;

	char c;

	while ( (c = getchar() ) != EOF ) {

		if ( c != ' ') {

			putchar(c);

			IN_BLANKS = 0;
		}
		
		else if ( c == ' ' && IN_BLANKS ) {

			continue;
		}

		else { // c == ' ' && !IN_BLANKS

			putchar(c);

			IN_BLANKS = 1;
	}

}
	return 0;
}
