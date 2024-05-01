#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int n) {
  n = 100;
}

int main() {

  int n = 10;
  fun(n);
  printf("N = %d\n",n);
  
  return 0;
}