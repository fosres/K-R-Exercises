// exercise_1-8.c
/*
 * Write a program to count blanks,
 *
 * tabs, and newlines.
 */

#include <stdio.h>

int main() {

	int num_blanks = 0; int num_tabs = 0; int num_newlines = 0; char c;

	while ( (c = getchar() ) != EOF ) {

		if ( c == ' ') { num_blanks++;}
		
		else if ( c == '\t' ) {num_tabs++;}

		else if ( c == '\n') { // c == '\n'

			num_newlines++;
		}

		else {
			continue;

		}
	}

		printf("Number of blanks: %d\nNumber of tabs: %d\nNumber of newlines: %d\n",num_blanks, num_tabs, num_newlines);

		return 0;
	}
