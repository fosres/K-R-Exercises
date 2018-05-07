// exercise_1-17.c
/* Write a program to print all input
 *
 * lines that are longer than 80
 *
 * characters.
 */

#include <stdio.h>
#define MAXLINE 1000
int get_line( char s[], int lim ) {

	int c, i;

	for ( i = 0; i < lim - 1 && (c = getchar()) != EOF &&  c != '\n'; ++i ) 
		s[i] = c;
	if (c == '\n') {

		s[i] = c;
		++i;

	}
	s[i] = '\0';
	return i;

}
int main() {
	char line[MAXLINE]; int len; 

	while ( ( len = get_line(line,MAXLINE) ) > 0 ) {

		if ( len > 80 ) { printf("%s\n",line);}

	}
	
	return 0;
	
	}

