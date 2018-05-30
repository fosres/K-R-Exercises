//exercise_3-2.c

#include <stdio.h>

void escape(char *s, char *t) // remember to account for '\0'
{
	char *s_zero_value = s;

	char *t_zero_value = t;

	while (*t_zero_value != '\0')
	{

		switch(*t_zero_value)
		{

			case '\t':
				*s_zero_value++ = '\\';
				*s_zero_value++ = 't';
				t_zero_value++;
			case '\n':
				*s_zero_value++ = '\\';
				*s_zero_value++ = 'n';
				t_zero_value++;
			case '\'':
				*s_zero_value++ = '\\';
				*s_zero_value++ = '\'';
				t_zero_value++;
			case '\\':
				*s_zero_value++ = '\\';
				*s_zero_value++ = '\\';
				t_zero_value++;
			case '\b':
				*s_zero_value++ = '\\';
				*s_zero_value++ = 'b';
				t_zero_value++;
				break;
			default:
				*s_zero_value = *t_zero_value;
				s_zero_value++;
				t_zero_value++;
				break;

		}

	}

	// what about '\0'?
	
	*s_zero_value = *t_zero_value;

}

int main()
{
	char t[1000] = "Z	E	R	G";

	char s[1000];

	escape(s,t);

	printf("%s\n",s);
	
return 0;
}
