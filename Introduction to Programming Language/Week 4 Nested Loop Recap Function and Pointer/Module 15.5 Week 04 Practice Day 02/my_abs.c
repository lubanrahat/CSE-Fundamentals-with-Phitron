#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int my_abs(int n) {
  if(n<0) {
    return (n*=-1);
  }
  return n;
}

int main() {

  int n;
  scanf("%d",&n);

  printf("%d\n",my_abs(n));

  return 0;
}