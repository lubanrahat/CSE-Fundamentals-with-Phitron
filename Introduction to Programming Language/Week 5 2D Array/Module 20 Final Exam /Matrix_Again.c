#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int row,cal;
  scanf("%d %d",&row,&cal);
  int arr[row][cal];
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<cal;i++) {
    printf("%d ",arr[row-1][i]);
  }
  printf("\n");
  for(int i=0;i<row;i++) {
    printf("%d ",arr[i][cal-1]);
  }

  return 0;
}