//from final 2023-2024, it is never unique, all races have the same output
#include <stdio.h>
#include <omp.h>
#include <windows.h>

int main(){
int prod = 1;

#pragma omp pragma parallel num_thread(4) shared (prod)
for (int i =2; i<5; i++)
    prod = prod * i;

printf ("prod is %d", prod);
return 0;
}