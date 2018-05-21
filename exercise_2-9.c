//exercise_2-9.c

/******************************************************************************

  The definition always ensures the rightmost

  1-bit is &'d to a 0 below, rendering 1-bit

  to a 0. The operation will also ensure all

  bits afterwards are zero.

*******************************************************************************/

#include <stdio.h>

int bitcount(unsigned x)                    {
    
    int b = 0;
    
    while ( x != 0 )                {
        
        x &= (x-1);
        
        b++;
    }
    
    return b;
    
    
}
int main()
{
    printf("%d\n",bitcount(037));
}

