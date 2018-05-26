// exercise_1-7.c

#include <stdio.h>
    
    unsigned getbits(unsigned x, int p, int n)                              {
        
        return (x >> (p + 1 - n)) & ~(~0<<n);
    }
    
    unsigned rightrot(unsigned x, int n)                                    {
        
        
        unsigned bits_at_p = getbits(x, n-1, n);
        
        x >>= n;
        
        x = x | ((bits_at_p << ((32-n))));
        
        
        
        return x;
    }
    
    int main() {
        
        unsigned x;
  int n;

  for(x = 0; x < 700; x += 49)
    for(n = 1; n < 8; n++)
      printf("%u, %d: %u\n", x, n, rightrot(x, n));
  return 0;
    }

