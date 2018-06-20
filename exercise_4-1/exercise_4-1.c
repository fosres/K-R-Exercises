#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAR 255

int strrindex(char *s, const char * t)
{
  char *s_rev = &s[strlen(s)-1];

  int index = -1;

  while (index==-1 && s_rev >= &s[0])
  {
    (strstr(s_rev,t)!=NULL)?(index=(int)(strstr(s_rev,t)-s)):(index=-1);
    s_rev--;
  }
  return index;
}

int main()
{

char s[1000] = "Swag monster.";
char t[1000]= "er.";
printf("%d\n",strrindex(s,t));
return 0;

}
