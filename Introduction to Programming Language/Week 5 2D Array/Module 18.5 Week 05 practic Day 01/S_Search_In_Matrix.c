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
  int target,falg=0;
  scanf("%d",&target);
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      if(arr[i][j] == target) {
        falg=1;
      }
    }
  }

  if(falg) {
    printf("will not take number\n");
  }else {
    printf("will take number\n");
  }

  return 0;
}