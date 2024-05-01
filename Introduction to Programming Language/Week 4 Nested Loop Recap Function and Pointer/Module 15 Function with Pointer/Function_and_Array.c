#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

void fun(int *arr,int n) {
  int mx=INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]>mx) {
      mx=arr[i];
    }
  }
  printf("Max value is: %d\n",mx);
}

int main() {

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(int);
  fun(arr,n);
  return 0;
}