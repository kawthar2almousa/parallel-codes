#include <stdio.h>
//#include <unistd.h>
#include <omp.h>

int main(void)
{    
    int var = 100;

    printf("Before parallelism, var's address is %p, and value is %d \n", &var, var);

    #pragma omp parallel for private(var)//wil have 5 different addresses, even with firstprivate
    for (int i = 0; i < 4; i++) {
	printf("var's address in thread %d is %p, and value is %d\n", omp_get_thread_num(), &var, var);
    	printf(" thread = %d of i= %p, and address i is %d\n", omp_get_thread_num(), &i, i);

 	var = i;
     }
    printf("After parallelism, var's address is %p, and value is %d\n", &var, var);
    return 0;}

//same thread goes sequential with iterations 4 cannot happen before 3 if in the same core