#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int x=10;
  printf("%p\n",&x);
  int* p=&x;
  printf("%p\n",p);

  printf("Value of x: %d\n",*p);
  *p = 500;
  printf("Value of x: %d\n",x);

  return 0;
}