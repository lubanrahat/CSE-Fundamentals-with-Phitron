#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int maxValue(int arr[],int n) {
  int answer=INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]>answer) {
      answer=arr[i];
    }
  }
  return answer;
}
 
int minValue(int arr[],int n) {
  int answer=INT_MAX;
  for(int i=0;i<n;i++) {
    if(arr[i]<answer) {
      answer=arr[i];
    }
  }
  return answer;
}

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) 
    scanf("%d",&arr[i]);

  printf("%d %d\n",minValue(arr,n),maxValue(arr,n));    

  return 0;
}