#include <omp.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

int main() {
  int count = 100;

  // With the `private` clause, each thread will have its own copy of the variable `count`.
  #pragma omp parallel for private(count)
  for (int i = 0; i < 10; i++) {
    count++;
  }
 printf("count is %d \n",count);
  // With the `firstprivate` clause, each thread will have its own copy of the variable `count`, but it will be initialized with the value of `count` from the enclosing scope.
  #pragma omp parallel for firstprivate(count)
  for (int i = 0; i < 10; i++) {
    count++;
  }
  printf("count is %d \n",count);

  // After the parallel region is finished, the variable `count` will contain the value 10 on all threads with the `private` clause.
  // After the parallel region is finished, the variable `count` will contain the value 20 on all threads with the `firstprivate` clause.
  printf("The final value of count is %d.\n", count);

  return 0;
}