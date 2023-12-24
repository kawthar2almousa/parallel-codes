#include <stdio.h>
#include <time.h>
#include <omp.h>

int main(void) {
    int var = 100;

    printf("Before parallelism, var's address is %p, and value is %d \n", &var, var);

    #pragma omp parallel for private(var)
    for (int i = 0; i < 4; i++) {
        printf("var's address in thread %d is %p, and value is %d\n", omp_get_thread_num(), &var, var);
        var = i;
    }

    printf("After parallelism, var's address is %p, and value is %d\n", &var, var);

    // Added line to print address again
    printf("Final var address: %p\n", &var);

    return 0;
}