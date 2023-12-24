#include <stdio.h>
#include <omp.h>


int main(void) {
  int a[5] = {16, 2, 77, 40, 12071};
  int b[5] = {16, 2, 77, 40, 12071};

  #pragma omp parallel for
  for (int i = 0; i < 5; i++) {
    a[i] = b[i] + 10;
  }

  for (int i = 0; i < 5; i++) {
    printf("\t %d " , a[i] , " ") ;
  }

  return 0;
}