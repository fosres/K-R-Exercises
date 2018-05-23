// exercise_2-7.c

#include <stdio.h>

    unsigned getbits(unsigned x, int p, int n)                              {
        
        return (x >> (p + 1 - n)) & ~(~0<<n);
    }
    
    unsigned rightrot(unsigned x, int n)                                    {
        
        unsigned bits_at_p = getbits(x, n-1, n);
        
        x = (x >> n) | (bits_at_p << 1);
        
        return x;
    }
    
    int main() {
        
        printf("%o\n",rightrot(13,1));
    }
