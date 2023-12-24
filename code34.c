//from final 2023-2024, answer is 1 2 2, it was mcq, IMPORTANT im not sure that the code is accurate
// the main purpose was a trick, single does not enclose the entire block it only operant on print 1
// print 1 and print 2 are within a parallel regoin however print 1 is in single and since there is no curly braces, the single statement will only work on the first line under it
#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel num_threads(2)
    {
        #pragma omp for
        for (int i = 0; i < 2; i++) {
            #pragma omp single
            
                printf("1");
                printf("2");
            
        }
    }
    return 0;
}
