#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int row,cal;
  scanf("%d %d",&row,&cal);
  int arr[row][cal];
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      scanf("%d",&arr[i][j]);
    }
  }
  // for(int i=0;i<row;i++) {
  //   for(int j=0;j<cal;j++) {
  //     printf("%d ",arr[i][j]);
  //   }
  //   printf("\n");
  // }
  int e=2;
  scanf("%d",&e);
  // for(int i=0;i<cal;i++) {
  //   printf("%d ",arr[e][i]);
  // }
  for(int i=0;i<row;i++) {
    printf("%d ",arr[i][e]);
  }
  printf("\n");

  return 0;
}