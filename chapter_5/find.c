#include <stdio.h>
#include <string.h>
#define MAX 1000

int getline(char *line, int max);

/* find: print lines that match pattern from 1st arg */

int main(int argc, char * argv[])
{
	char line[MAXLINE];

	long lineno = 0;

	int c, except = 0, number = 0, found = 0;


