#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n,i=0;
  scanf("%d",&n);

  while(i<n) {
    for(int space=0;space<n-i;space++) {
      printf(" ");
    }
    int j=0;
    while(j<2*i+1) {
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }

  return 0;
}