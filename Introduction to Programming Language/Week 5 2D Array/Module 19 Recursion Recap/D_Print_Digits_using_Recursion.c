#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

void printDigit(int n) {
  if(n == 0) return;
  printDigit(n/10);
  printf("%d ",n%10);
}

int main() {

  int tt;
  scanf("%d",&tt);
  while(tt--) {
    int n;
    scanf("%d",&n);
    printDigit(n);
    if(n==0) printf("0");
    printf("\n");
  }

  return 0;
}