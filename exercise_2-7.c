/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

unsigned getbits(unsigned x, int p, int n)                  {
    
    return (x >> (p-1+n))&~(~0<<n);
}

unsigned invert(unsigned x, int p, int n)                   {
    
    int pos = p; bool bit_at_p = 0;
    
    while (pos >= (p-n+1))              {
        
        if ( getbits(x,pos,1) == 1)
        {
            x&=~(1<<pos);
        }
        else // getbits(x,pos,0) == 0
        {
            x |= (1 << pos);
        }
        pos--;
    }
        return x;
}

int main()
{

	printf("%u\n",invert(13,3,3));

    return 0;
}

