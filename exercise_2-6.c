//clang 3.8.0

#include <stdio.h>

unsigned getbits( unsigned x, int p, int n)
{
    
   return (x>>(p+1-n))&~(~0<<n);    
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  
    unsigned set_these_bits = getbits(x,p,n);
    
    x&=~(set_these_bits << (p - n + 1) );
    
    // Now bits in setbits region are 0, all other bits conserved
    
    x|=((getbits(y,n-1,n) << (p-n+1)));
    
    return x;
    
}

int main()
{
    printf("%o\n",setbits(0,30,31,~0));
}
