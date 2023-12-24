#include <stdio.h>
#include <windows.h>

int main(){

int x=10, y=0;
#pragma omp parallel shared(x)
 {
    x=x+1;
    printf("thread num %d, x=%d \n", omp_get_thread_num(),x);
}

printf("sequential ... threads no %d, x=%d \n",omp_get_thread_num(),x);
return 0;
}