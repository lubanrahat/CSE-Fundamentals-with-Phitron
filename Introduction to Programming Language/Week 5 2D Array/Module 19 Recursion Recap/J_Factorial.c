#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

long long int factorial(int n) {
  if(n==0) return 1;
  return n*factorial(n-1);
}

int main() {

  int n;
  scanf("%d",&n);

  long long int ans = factorial(n);
  printf("%lld\n",ans);

  return 0;
}