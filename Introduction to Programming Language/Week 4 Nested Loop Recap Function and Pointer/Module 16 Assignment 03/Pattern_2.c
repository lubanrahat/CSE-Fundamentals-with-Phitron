#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {
    for(int space=1;space<=n-i;space++) {
      printf(" ");
    }
    for(int j=1;j<=i;j++) {
      printf("%d",i-j+1);
    }
    printf("\n");
  }

  return 0;
}