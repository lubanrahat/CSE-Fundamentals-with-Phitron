#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main() {
 
  int row;
  scanf("%d",&row);
  //part 1
  for(int i=0;i<row;i++) {
    for(int space=1;space<=row-i-1;space++) {
      printf(" ");
    }
    for(int j=0;j<2*i+1;j++) {
      printf("*");
    }
    printf("\n");
  }
  //part 2
  for(int i=0;i<row;i++) {
    for(int space=0;space<i;space++) {
      printf(" ");
    }
    for(int j=0;j<2*(row-i)-1;j++) {
      printf("*");
    }
    
    printf("\n");
  }
 
  return 0;
}