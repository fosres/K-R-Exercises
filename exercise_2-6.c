//clang 3.8.0

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
   return (x >> (p+1-n) ) & ~(~0 << n); 
    
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned bits_of_y = getbits(y,n-1,n);
    
    int pos = p;
    
    int RSB_y;
    
    while (pos >= (p+1-n) )
    {
        RSB_y = bits_of_y & 1;
        
        if ( RSB_y == 1 )
        {
           x |= ( 1 << pos );   
        }
        
        else // RSB_y == 0
        {
            x &=~( 1 << pos );
            
        }
        
        pos--;
        
        bits_of_y >>= 1;
        
        
    }
    
    return x;
    
    
    
}

int main()
{
    printf("%u\n",setbits(0,2,3,07));
    
    
    
}
