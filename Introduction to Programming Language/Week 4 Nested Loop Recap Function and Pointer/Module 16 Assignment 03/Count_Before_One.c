#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int count_before_one(int *arr,int n) {
  int cnt=0;
  for(int i=0;i<n;i++) {
    if(arr[i]==1) {
      break;
    }
    cnt++;
  }
  return cnt;
}

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) 
    scanf("%d",&arr[i]);
  printf("%d\n",count_before_one(arr,n));  

  return 0;
}