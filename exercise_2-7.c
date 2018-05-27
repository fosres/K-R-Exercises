// exercise_2-7.c

#include <stdio.h>
#include <stdbool.h>

unsigned getbits(unsigned x, int p, int n)			{

	return (x >> (p + 1 -n)) & ~(~0 << n);
	
	/*
	everything before ampersand cuts off after
	
	the rightmost digit that must be extracted,
	
	whereas everything after the ampersand
	
	cuts off BEFORE the leftmost digit.
	*/

}

unsigned invert (unsigned x, unsigned p, unsigned n)			{

	unsigned bits_at_p = getbits(x,p,n);
	
	bool RSB = 0;
	
	unsigned index_of_inversion = (p-n+1);
	
	
	while (bits_at_p > 0)                      {
	    
	    RSB = bits_at_p & 1;
	    
	    if (RSB == 0)    {
	        
	        x |= (1 << (index_of_inversion)); 
	        
	    }
	    
	    else             {
	        
	        x &= ~(RSB << (index_of_inversion)); 
	    }
	    
	    index_of_inversion++;
	    
	    bits_at_p >>= 1;
	    
	}

	return x;

}

int main() 							{

	printf("%u\n",invert(0,31,32));

   
}

