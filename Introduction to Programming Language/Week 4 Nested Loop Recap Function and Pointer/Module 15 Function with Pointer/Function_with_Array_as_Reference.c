#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(int *arr,int n) {
  arr[0]=500;
}

int main() {

  int arr[5] = {1,2,3,4,5};
  int n =5;
  for(int i=0;i<n;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  fun(arr,n);
  for(int i=0;i<n;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  

  return 0;
}