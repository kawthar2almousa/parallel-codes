
#include <stdio.h>
#include <time.h>
#include "omp.h"

int main() {
 const int n=1000;
 int tot=0;
 
#pragma omp parallel for reduction (+: tot)
for (int i=0; i<n;i++)
{
tot = tot+i;
}
printf(" total= %d", tot);
printf(" must be = %d", (((n-1)*n)/2));
}
