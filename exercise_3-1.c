//exercise_3-1.c

/* NOTE: ARRAY MUST BE SORTED BEFORE

CALLING FUNCTION.

LET ME REPEAT:

ARRAY MUST ALREADY BE SORTED

*/
#include <stdio.h>

int binsearch(int x, int v[], int n)  {

  int low = 0;

  int high = n-1;

  int mid;

  if (x<v[low]||x>v[high]) // array is already sorted
    return -1;
  
  while ((low <= high) && ( x != v[mid]) ) 
    {
      mid = (low+high)/2;
      if ( x < v[mid])
        high = mid - 1;
      else
        low = mid + 1;

    }

    return (( (x==v[mid])? mid :-1));
}

int main() {
  int list[] = {1,2,5,6,8,9};
  printf("%d",binsearch(7,list,5));
  return 0;
}
