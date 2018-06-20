#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 255
int main()
{
	
	char s[1000];
	char t[1000];
	
	char random_char;
	static int j;

	while (j++ < 10000)
	{

	char random_char; 

	for (int i = 0; i < 999; i++) //creating char s[1000]
	{
	
	random_char = (1+(random()/(double)RAND_MAX*(MAX_CHAR-1))+0.5);

	s[i] = random_char;

	}

	for ( int i = 0; i < (1+(random()/(double)RAND_MAX*(999-1)+0.5)); i++) //creating char t[1000]
	{
		
		random_char = (1+(random()/(double)RAND_MAX*(MAX_CHAR-1))+0.5);

		t[i] = random_char; 

	}

	}


}
