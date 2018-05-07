// exercise_1-12.c
/* Write a program that
 *
 * prints its input one word
 *
 * per line.
 */

#include <stdio.h>
#include <stdbool.h>
int main() {

	char c;
	bool OUT_A_WORD = 0;

	while ( ( c = getchar() ) != EOF ) {

		if ( ( c == ' ' || c == '\t' ) && !OUT_A_WORD ) {
			
			putchar('\n');

			OUT_A_WORD = 1;
		}

		else if ( ( c == ' ' || c == '\t' ) && OUT_A_WORD ) {
			
			continue;

		}

		else if ( c == '\n' ) {

			putchar(c);

		}

		else { // so its a letter or number char

			putchar(c);

			OUT_A_WORD = 0;
	}

}
	return 0;
}
