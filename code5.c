#include <stdio.h>
#include <omp.h>

int main(void) {

  printf("A \n"); 
#pragma omp parallel 
{ 
 printf("B \n");
#pragma omp for 
for (int i = 0; i < 10; ++i)
 	{
	  printf("C + %d \n",i);; 
	}
  printf("D \n"); 
} 

 printf("E \n");

  return 0;
}