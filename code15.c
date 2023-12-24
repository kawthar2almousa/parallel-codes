#include <stdio.h>
#include <omp.h>
#include <windows.h>

int main(){

#pragma omp parallel
   {
    printf("thread # %d\n", omp_get_thread_num());
     #pragma omp single // IMPORTANT in openmp, whatever statement follows under the decleration of any term under #openmp, if curly braces are not used, it will only apply to the first line immediatly under it
      {
        printf("i am Thread # %d\n", omp_get_thread_num());
     } 
 }
 return 0;
}