// exercise_1-10.c
/* Write a program to copy its input to
 *
 * its output, replacing each tab by \t,
 *
 * each backspace by \b, and each backslash
 *
 * by \\. This makes tabs and backspaces 
 *
 * visible in an unambiguous way.
 */

#include <stdio.h>

int main() {

	char c;

	while ( (c = getchar() ) != EOF ) {

		if ( c == '\t') {

			putchar('\\');
			putchar('t');
			continue;
		}
		else if ( c == '\b') {

			putchar('\\');
			putchar('b');
			continue;
		}

		else if ( c == '\\') {

			putchar('\\');
			putchar('\\');
			continue;
		}

		else { // c is None of the above chars
			putchar(c);

		}

	}
	return 0;
}
