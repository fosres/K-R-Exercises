/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int
main ()
{
  char c1 = NULL, c2;
  
  char removed_comments[10000];
  
  int i = 0;

  bool IN_ASTERISK_MODE = 0, IN_SLASH_MODE = 0;

  while ((c2 = getchar ()) != EOF)
    {

      if (c2 == '*' && c1 == '/')
	{

	  IN_ASTERISK_MODE = 1;
	  
	  i--; // Need to delete '/' in "/*"
	}

      else if (c2 == '/' && c1 == '*')
	{

	  IN_ASTERISK_MODE = 0;
	}

      else if (c2 == '/' && c1 == '/')
	{

	  IN_SLASH_MODE = 1;
	  
	  i--; // Need to delete '/' in "//"

	}

      else if (c2 == '\n')
	{

	  IN_SLASH_MODE = 0;
	  
	  removed_comments[i++] = c2;
	}

      else if (!IN_ASTERISK_MODE && !IN_SLASH_MODE)
	{

	  removed_comments[i++] = c2;
	}

      else
	{			// In comment mode, so continue to next char
        
	}

      c1 = c2;
     
    }

  
  printf("%s",removed_comments);
  return 0;
}
