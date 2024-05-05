#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int n) {
  if(n==6) return;
  fun(n+1);
  printf("%d\n",n);
}

int main() {

  int n = 1;
  fun(n);

  return 0;
}