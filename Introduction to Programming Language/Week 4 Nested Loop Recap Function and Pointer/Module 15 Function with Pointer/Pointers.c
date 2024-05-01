#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n = 10;
  printf("N = %d\n",n);
  int *ptr = &n;

  *ptr = 100;

  printf("%p\n",ptr);
  printf("%p\n",&n);
  printf("%p\n",&ptr);
  printf("N = %d\n",n);
  printf("size of ptr: %lu\n",sizeof(ptr));

  double d = 5.12;
  double *dptr = &d;
  printf("size of sptr: %lu\n",sizeof(dptr));

  int *ptr2 = ptr;
  printf("%p\n",ptr2);
  printf("value of ptr2: %d\n",*ptr2);

  return 0;
}
