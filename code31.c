
#include <stdio.h>
#include <time.h>
#include "omp.h"

int main() {

  int tid;
  tid = omp_get_thread_num();
  printf("Thread name <%d> executing main \n", tid);
   #pragma omp parallel for schedule (guided, 8)
    for (int i=1; i<=8;i++)
{
  tid = omp_get_thread_num();
  printf("Thread name <%d> executing %d \n", tid, i);
 }
}
