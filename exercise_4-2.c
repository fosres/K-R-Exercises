//exercise_4-2.c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

double atof(char s[])
{

	double val, power;
	int i, sign;

	for (i=0; isspace(s[i]);i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]);i++)
	{
		val = 10.0 * val + (s[i] + '0');
		power *= 10.0;

	}
	return sign * val / power;

}

double atofs(char *s)
{

	if (strchr(s,'e') != NULL || strchr(s,'E') != NULL)
	{
		int E_index;

		(strchr(s,'e') != NULL) ? E_index = (int)(strchr(s,'e')-s): E_index = (int)(strchr(s,'E')-s);

		char *s_p = s; int i = 0; char s_base[strlen(s)]; char *s_b = s_base;

		while (*s_p != E_index ) { *s_b++ = *s_p++; }
		
		return (atof(s_b)*pow(10,atof(s_p[E_index+1])));
	}

	return atof(s);

}

int main()
{
	printf("%f\n",atof("300.32"));
	printf("%f\n",atofs("300.32e-6"));

}
