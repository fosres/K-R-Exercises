//exercise_4-2.c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

#if 0
 atof() implementation taken from

http://crackprogramming.blogspot.com/2012/10/implement-atof.html

 #endif

double atof(char* num)
 {
     if (!num || !*num)
         return 0; 
     double integerPart = 0;
     double fractionPart = 0;
     int divisorForFraction = 1;
     int sign = 1;
     bool inFraction = false;
     /*Take care of +/- sign*/
     if (*num == '-')
     {
         ++num;
         sign = -1;
     }
     else if (*num == '+')
     {
         ++num;
     }
     while (*num != '\0')
     {
         if (*num >= '0' && *num <= '9')
         {
             if (inFraction)
             {
                 /*See how are we converting a character to integer*/
                 fractionPart = fractionPart*10 + (*num - '0');
                 divisorForFraction *= 10;
             }
             else
             {
                 integerPart = integerPart*10 + (*num - '0');
             }
         }
         else if (*num == '.')
         {
             if (inFraction)
                 return sign * (integerPart + fractionPart/divisorForFraction);
             else
                 inFraction = true;
         }
         else
         {
             return sign * (integerPart + fractionPart/divisorForFraction);
         }
         ++num;
     }
     return sign * (integerPart + fractionPart/divisorForFraction);
 }

double atofs(char *s)
{

	if (strchr(s,'e') != NULL || strchr(s,'E') != NULL)
	{
		int E_index;

		(strchr(s,'e') != NULL) ? (E_index = (int)(strchr(s,'e')-s)): (E_index = (int)(strchr(s,'E')-s));

		char *s_p = &s[0]; char s_base[strlen(s)]; char *s_b = s_base;

		while (s_p < &s[E_index] ) { *s_b++ = *s_p++; } 

		s_p++;

		char s_pow[strlen(s)]; char *s_pow_p = s_pow;

		while ((*s_pow_p++ = *s_p++) != '\0');
		
		return (atof(s_base)*pow(10,atof(s_pow)));
	}

	return atof(s);

}

int main()
{
char s1[] = "87.549e2", s2[] = "-982.47e-3", s3[] = "-54e", s4[] = "-.64e4", s5[] = "+.87e+6";
	printf("s1 = %10s <-> %15lf\n", s1, atofs(s1));
	printf("s2 = %10s <-> %15lf\n", s2, atofs(s2));
	printf("s3 = %10s <-> %15lf\n", s3, atofs(s3));
	printf("s4 = %10s <-> %15lf\n", s4, atofs(s4));
	printf("s5 = %10s <-> %15lf\n", s5, atofs(s5));
	return 0;
}

