#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  int x;
  int* y;
  long z;
  double* a;
  char** b;

  printf("The size of int is %zu\n", sizeof(x));
  printf("The size of int* is %zu\n", sizeof(y));
    printf("The size of long is %zu\n", sizeof(z));
     printf("The size of double* is %zu\n", sizeof(a));
      printf("The size of char** is %zu\n", sizeof(b));



  return 0;
}
