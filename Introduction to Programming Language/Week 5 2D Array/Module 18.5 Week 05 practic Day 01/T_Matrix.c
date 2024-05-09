#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n][n];

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      scanf("%d",&arr[i][j]);
    }
  }
  int firstSum=0,secondSum=0;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i == j) {
        firstSum+=arr[i][j];
      }
    }
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i+j == n-1) {
        secondSum+=arr[i][j];
      }
    }
  }

  printf("%d\n",abs(firstSum-secondSum));

  return 0;
}