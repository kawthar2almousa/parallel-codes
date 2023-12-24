#include <stdio.h>
#include <time.h>
#include "omp.h"

int main() {
  int tid;
  #pragma omp parallel for schedule (static, 25)
    for (int i=0; i<100;i++)
{
  tid = omp_get_thread_num();
  printf("Thread name <%d> executing %d \n", tid, i);
 }
}
