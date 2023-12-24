#include <stdio.h>
#include <omp.h>
main ( ) {
    omp_set_num_threads(4);
#pragma omp parallel
  {
     printf("Hi \n") ;
 	#pragma omp master  
  	{ 
  	printf (" Only master thread\n") ; 
  	}
}
printf (".......\n") ;   
#pragma omp parallel
	printf ("Hello \n") ;
}
