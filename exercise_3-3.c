// exercise_3-3.c

#include <stdio.h>
#include <string.h>

char * expand(char * s1, char * s2)
{

	char c; char * s1_zero = s1; char * s2_zero = s2;

	while (*s1 != '\0')
	{

		
		if 	(  *s1 == '-' )
		{

			for ( c = *(s1-1); c <= *(s1 + 1); c++)
			{
				if( c==*(s2-1) && (s2 > s2_zero)) // skip duplicate char
				{
					continue;
				}
				else if ((s1 == s1_zero) && *s1_zero == '-')
				{
					*s2++ = '-';
				}
				else if ((s1 == (s1_zero + strlen(s1_zero)-1)) && (*(s1_zero+strlen(s1_zero)-1)=='-'))
					*s2++ = '-';
				else
				{
				*s2++ = c;
				}
			}

		}

		s1++;

	}

	return s2_zero;

}

int main()
{
	char input[1000] = "a-l-r";	
	char output[1000];	
	printf("%s\n",expand(input,output));

}

