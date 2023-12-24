#include <stdio.h>
//#include <pthread.h>
#include <windows.h>
main ( ) {
int N=4;
#pragma omp parallel for
  for(int i = 1; i < N+1; i++) 
  printf ("No more Children %d!\n", i) ;
  printf ("Done \n") ;     
#pragma omp parallel
 printf ("No more Children....1\n") ;
 printf ("No more Children...2 \n") ;
return (0);}
