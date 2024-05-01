#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int *x) {
  *x = 500;
} 

int main() {

  int x = 10;
  printf("Befor x: %d\n",x);
  fun(&x);
  printf("Aftar x: %d\n",x);

  return 0;
}