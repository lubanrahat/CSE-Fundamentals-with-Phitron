#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int row,cal;
  scanf("%d %d",&row,&cal);
  int arr[row][cal];
  int elemet=row*cal,count=0;
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      if(arr[i][j] == 0) {
        count++;
      }
    }
  }

  if(elemet==count) {
    printf("Zero Matrix\n");
  }else {
     printf("Not Zero Matrix\n");
  }

  return 0;
}