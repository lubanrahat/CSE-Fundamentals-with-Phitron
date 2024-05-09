#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int n) {
  if(n==0) return;
  fun(n-1);
  printf("%d\n",n);
}

int main() {

  int n;
  scanf("%d",&n);
  fun(n);

  return 0;
}