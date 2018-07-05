#include <stdio.h>
#include <float.h>

int main(int argc, char ** argv) {

  argv++;
  while (*argv != NULL)
  { printf("%s ",*argv++);}
}
