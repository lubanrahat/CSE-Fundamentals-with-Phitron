#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
    for(int space=1;space<n-i-1;space++) {
      printf(" ");
    }
    for(int k=0;k<2*i+1;k++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}