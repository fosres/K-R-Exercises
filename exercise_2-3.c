#include <stdio.h>


int htoi(char *s)                                                 {
  
  int decimal = 0;
  
  
  
  
  while ( *s == '\0')                                     {
    
    if ( *s >= 'A' && *s <= 'F')              {
      
      decimal = (10*decimal + (int)(((*s - 'A') + 10)));
    }
    
    else if (*s >= 'a' && *s <= 'f')          {
      
      decimal = (10*decimal + (int)(((*s - 'a') + 10)));
      
    }
    
    else if (*s == '0' && (*(s+1) == 'X'|| *(s+1)=='x')) {
      
      s = (s + 2);
      continue;
  }
  
    else { // regular digit from '0' to '9'
    
      decimal = (10 * decimal + (int)((*s - '0')));
    }
    
    s++;
  
}


return decimal;

}

int main() {
  
  char hex[] = "0xF315";
  
  
  int ans = htoi(hex);
  
  printf("%d\n", htoi(hex));  
}
