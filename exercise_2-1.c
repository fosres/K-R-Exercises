//exercise_2-1.c
/* Write a program to determine
 *
 * the ranges of char, short, int,
 *
 * and long variables, both signed
 *
 * and unsigned, by printing
 *
 * appropriate values from standard
 *
 * headers and by direct computation.
 *
 * Harder if you compute them: determine
 *
 * the ranges of the various floating
 * 
 * -point types.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {

	printf("Unsigned char range: %d to %d\n", CHAR_MIN, UCHAR_MAX);

	printf("Signed char range: %d to %d\n", SCHAR_MIN, SCHAR_MAX);

	printf("Unsigned int range: %u to %u\n", 0, UINT_MAX);

	printf("Short int range: %d to %d\n", SHRT_MIN, SHRT_MAX);

	printf("Long int range: %ld to %ld\n", LONG_MIN, LONG_MAX);

	printf("int range: %d to %d\n", INT_MIN, INT_MAX);

	printf("float range: %f to %f\n", FLT_MIN, FLT_MAX);

	printf("Double range/Long double range: %f to %f\n", DBL_MIN, DBL_MAX);

	



}
