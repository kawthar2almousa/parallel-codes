#include <stdio.h>
#include <omp.h>
//#include <unistd.h>

int main (int argc,char** argv){
    int tids;
    int tidp;
    #pragma omp parallel 
    set_num_threds(4);
    shared(tids); private(tidp);
    {
        #pragma omp for
        for(int i=0;i<10;i++)
        {
            tids=omp_get_thread_num();
            sleep(2);
            tidp=omp_get_thread_num();

            printf("\nthread shared is %d and private %d doing iteration %d", tids, tidp,i);
        }
    }
}