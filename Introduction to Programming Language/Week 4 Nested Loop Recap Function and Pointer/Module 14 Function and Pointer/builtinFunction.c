#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main() {

  double x=5.29;
  int a = ceil(x);

  printf("%d\n",a);
  printf("pow(%d,%d) = %f\n",10,2,pow(10,2));
  printf("%f\n",sqrt(10));
  printf("%d\n",abs(-5));

  long long int n = -109498543757834785;

  if(n<0) {
    n*=-1;
  }

  printf("%lld\n",n);

  return 0;
}