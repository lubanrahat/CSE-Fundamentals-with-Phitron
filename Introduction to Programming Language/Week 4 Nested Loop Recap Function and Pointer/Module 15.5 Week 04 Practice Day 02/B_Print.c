#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printN(int n) {
  for(int i=1;i<=n;i++) {
    printf("%d",i);
    if(i<n)
      printf(" ");
  }
  printf("\n");
}

int main() {

  int n;
  scanf("%d",&n);
  printN(n);

  return 0;
}