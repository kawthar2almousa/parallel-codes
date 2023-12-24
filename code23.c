#include <stdio.h>
#include <time.h>
#include "omp.h"

  int main (void)
{
	int x=2;
	int y=10;
  #pragma omp parallel for shared(x) private (y)
 
   for(int i=0;i<2;i++) 
  {
   #pragma omp critical
  y=0;
  x=x+1;
 printf("inside x = %d\n", x);
 printf("inside y = %d\n", y);
}
printf("outside x = %d\n", x);
    printf("outside y = %d\n", y);

    return 0;
}