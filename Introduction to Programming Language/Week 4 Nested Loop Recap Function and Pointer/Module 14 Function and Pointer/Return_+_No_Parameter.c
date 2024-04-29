#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int sum(void) {
  int a,b;
  scanf("%d %d",&a,&b);
  int s=a+b;
  return s;
}  

int main() {

  printf("%d \n",sum());

  return 0;
}