#include <stdio.h>
#include <string.h>

void expand(char *s1, char *s2)
{
	char *s1_p = s1; char *s2_p = s2; int index;

	while (*s1_p!='\0' )
	{
		
    index = (int)(s1_p-s1);
		
		if ((index==0)||(index==(strlen(s1)-1)))
		{
			*s2_p++=*s1_p++;
		}
		else if (*s1_p!='-')
		{
			*s2_p++=*s1_p++;
		}
		else //*s1_p=='-'
		{
			if ((*(s1_p-1)==' ')||(*(s1_p+1)==' '))
			{
				*s2_p++=*s1_p;
			}
			else if (*(s1_p-1) <= *(s1_p+1))
			{
			
			for (char c = (*(s1_p-1)+1); c < *(s1_p+1); c++ )
			{
				*s2_p++=c;
			}
			
			}

			else // (*(s1_p-1) > *(s1_p+1))
			{
			
			for (char c = (*(s1_p-1)-1); c > *(s1_p+1); c-- )
			{
				*s2_p++=c;
			}

			}

			*s1_p++;
		}
	}
}

int main() 
{
	  static char s1[1000] = "-- -z-l-a- --";

	  static char s2[1000];
	  

#if 0
TEST FAILS FOR "-a-z 0-9 a-d-f [Fails here]-0-2 some text 1-1 WITH CAPITALS! 0-0 5-3 -";

TEST FOR " -0-2- " would fail but if you fix above problem, this problem should also get fixed

TEST REVERSE "-z-a" prints -zyx..a would fail but you can fix that in the else statement

#endif
	      
	  expand(s1,s2);

	  printf("%s\n",s2);
		  
}


