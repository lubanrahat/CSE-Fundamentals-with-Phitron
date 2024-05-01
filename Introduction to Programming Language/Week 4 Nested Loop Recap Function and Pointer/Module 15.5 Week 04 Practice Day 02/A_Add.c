#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int add(int a,int b) {
  return a+b;
}

int main() {

  int a,b;
  scanf("%d %d",&a,&b);
  int answer=add(a,b);
  printf("%d\n",answer);

  return 0;
}