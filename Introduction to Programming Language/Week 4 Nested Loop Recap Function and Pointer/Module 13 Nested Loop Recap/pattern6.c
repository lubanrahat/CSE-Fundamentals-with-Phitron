#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n=5;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n-i+1;j++) {
      printf("%d ",j);
    }
    printf("\n");
  }

  return 0;
}