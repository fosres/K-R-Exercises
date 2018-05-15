#include <stdio.h>
#include <math.h>
#include <string.h>

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
  
  char hex[] = "0xF315";
  
  
  int ans = htoi(hex);
  
  printf("%d\n", hex);  
}
