#include <stdio.h>
#include <omp.h>

int main() {
	int numThreads = omp_get_max_threads();
	printf("threads to be spawned... \n",numThreads);
	 #pragma omp parallel 
     {
        #pragma omp critical
           printf("Hello from thread %d \n",omp_get_thread_num()); 
        }
     
	
	printf("Threads finished.\n");
	omp_set_num_threads(12);
	#pragma omp parallel
	 { printf("Goodbye from thread %d \n" ,omp_get_thread_num()); }
	 return 0;
}


