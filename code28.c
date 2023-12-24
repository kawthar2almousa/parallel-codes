
#include <stdio.h>
#include <time.h>
#include "omp.h"

int main() {
  int tid;
  #pragma omp parallel for schedule (dynamic)
    for (int i=0; i<8;i++)
{
 tid = omp_get_thread_num();
 printf("Thread name <%d> executing %d \n", tid, i);
 }
}
