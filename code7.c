#include <stdio.h>
#include <time.h>
#include "omp.h"
int main() {
 int tid;
 #pragma omp parallel num_threads(4) private(tid)
{
#pragma omp for
for (int i = 0; i < 16 ; i++)
{
tid = omp_get_thread_num();
printf("Thread name <%d> executing %d \n", tid, i);
}
}
return 0;
}
