#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  
  for(int i=0;i< n;i++) {
    for(int space=0;space<=i;space++) {
      printf(" ");
    }
    for(int j=0;j<2*(n-i)-1;j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}