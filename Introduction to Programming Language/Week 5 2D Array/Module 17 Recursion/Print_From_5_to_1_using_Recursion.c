#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int i) {
  if(i== 0) return;
  printf("%d\n",i);
  fun(i-1);
}


int main() {

  fun(10);

  return 0;
}