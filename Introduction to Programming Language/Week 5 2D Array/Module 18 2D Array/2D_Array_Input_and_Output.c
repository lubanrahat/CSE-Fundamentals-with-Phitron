#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int arr[5][3];

  for(int i=0;i<5;i++) {
    for(int j=0;j<3;j++) {
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<5;i++) {
    for(int j=0;j<3;j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  int sum = 0;
  for(int i=0;i<5;i++) {
    for(int j=0;j<3;j++) {
      sum+=arr[i][j];
    }
  }

  printf("Sum of 2D Array: %d\n",sum);


  return 0;
}