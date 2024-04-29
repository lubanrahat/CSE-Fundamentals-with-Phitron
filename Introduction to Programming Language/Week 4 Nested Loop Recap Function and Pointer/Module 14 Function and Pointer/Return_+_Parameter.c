#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// int sum(int a,int b) {
//   int sum=a+b;
//   return sum;
// }
int sum(int a,int b);

int main() {

  int a=10,b=20;
  printf("%d\n",sum(a,b));

  return 0;
}

int sum(int a,int b) {
  int sum=a+b;
  return sum;
}