#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int row,cal;
  scanf("%d %d",&row,&cal);

  int a[row][cal],b[row][cal],c[row][cal];
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      scanf("%d",&b[i][j]);
    }
  }
  
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      c[i][j] = a[i][j]+b[i][j];
    }
  }
  for(int i=0;i<row;i++) {
    for(int j=0;j<cal;j++) {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }

  return 0;
}