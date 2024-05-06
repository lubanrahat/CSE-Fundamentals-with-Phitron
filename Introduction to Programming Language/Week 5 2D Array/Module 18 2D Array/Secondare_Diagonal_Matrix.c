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

  bool flag=true;
  if(cal!=row) {
    flag=false;
  }

  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      if(i==j) {
        if(arr[i][j]!=arr[0][0]) {
          flag=false;
        }
      }
    }
  }

  if(flag) {
    printf("Scalar Matrix\n");
  }else {
    printf("Not Scalar Matrix\n");
  }

  return 0;
}