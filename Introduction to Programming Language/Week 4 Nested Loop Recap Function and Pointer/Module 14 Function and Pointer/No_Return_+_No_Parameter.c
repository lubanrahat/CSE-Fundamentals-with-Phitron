#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void sum() {
  int x,y;
  scanf("%d %d",&x,&y);
  int s=x+y;
  printf("sum : %d\n",s);
}

int main() {

  sum();

  return 0;
}