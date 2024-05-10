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
  bool flag = true;
  if(row!=cal) {
    flag=false;
  }
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      if(i==j) {
        if(arr[i][j]!=1) {
          flag=false;
          break;
        }
        continue;
      }
      if(i+j==row-1) {
        if(arr[i][j]!=1) {
          flag=false;
          break;
        }
        continue;
      }

      if(arr[i][j]!=0) {
        flag=false;
      }
    }
  }

  if(flag) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }

  return 0;
}