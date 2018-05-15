#include <stdio.h>
#include <math.h>
#include <string.h>

/* 
  
  Usage:
  
  For char hex[], 
  
  input a hexadecimal
  
  string. It may begin
  
  with "0x" or "0X" 
  
  and immediately 
  
  followed by hexadecimal
  
  digits, including from
  
  'A' to 'F'. The
  
  letters can be uppercase or
  
  lowercase.


  How it Works:

  Does the following equation from
  
  RIGHT TO LEFT:
  
  16^n*b_n + 16^(n-1)*b_(n-1) + 16^(n-2)*b_(n-2) + .. 16^0*b_0
  
  <---  <---  <---  <---  <---  <---  <---  <---  <----
  
  Understand the following
  
  char c = 'A';
  
  (c - 'A') == ((int)0) NOT '0'
  
  C compiler will automatically convert char
  
  to an int when you apply an arithmetic
  
  operator to it and another char.
  
  */

int htoi(char *s)                                           {
  
  char *zero_value = s; 
  
  int base;
  
  int exp = 0;
  
  int decimal = 0;
  
  char *right = (s + (strlen(s)-1) );
  
  while ( right >= zero_value)                            {
    
    if (*right == 'X' || *right == 'x')                 {
      
      break;
    }
    
    else if (*right>= 'A' && *right <= 'F')             {  
      
      base = ((*right -'A')+10);
      
      decimal = ((int)pow(16,exp++))*base + decimal;
      
    }
    
    else if (*right>= 'a' && *right <= 'f')             {  
      
      base = ((*right -'a')+10);
      
      decimal = ((int)pow(16,exp++))*base + decimal;
      
    }
    
    else                                                {
      // regular digit from '0' to '9'
      base = ((*right - '0'));
      
      decimal = ((int)pow(16,exp++))*base + decimal;
    
  }
  
    right--;
  
}

return decimal;

}

int main() {
  
  char hex[] = "0XaBc";
  
  
  int ans = htoi(hex);
  
  printf("%d\n", ans);  
}
