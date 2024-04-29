#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int x = 300;
void fun(void) {
  int s=100;
  printf("Fun er s er address: %p\n",&s);
  printf(" X = %d\n",x);
  // printf("Y = %d\n",y);
}

int main() {

  int s=100;
  int y = 500;
  printf("Main er s er address: %p\n",&s);
  printf(" X = %d\n",x);
  fun();
  
  return 0;
}