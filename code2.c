#include <stdio.h>
#include <omp.h>
#include <windows.h>
main ( ) {

 int N=12;
 omp_set_num_threads(1);
#pragma omp parallel for
   
      for(int i = 1; i < N+1; i++) 
      printf ("Hello World! from iteration %d, from thread # %d \n", i,omp_get_thread_num());
      
      printf ("MAX threads %d \n" ,omp_get_max_threads());

 return 0;
}
