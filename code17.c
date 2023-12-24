//#include <pthread.h>
#include <stdio.h>


void *myfunc1(void *p) {
  printf ("Good day ");
}

void *myfunc2(void *p) {
  printf (" to you");
}

int main() {
  pthread_t child1;
  pthread_create (&child1, NULL, myfunc1, NULL);
  pthread_t child2;
  pthread_create (&child2, NULL, myfunc2, NULL);
  pthread_join (child2, NULL);
  printf ("\nHello");
  return 0;
}