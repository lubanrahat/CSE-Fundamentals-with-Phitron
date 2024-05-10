#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  int min = INT_MAX,count=0;
  for(int i=0;i<n;i++) {
    if(arr[i]<min) {
      min = arr[i];
    }
  }

  for(int i=0;i<n;i++) {
    if(arr[i]==min) count++;
  }

  if(count%2!=0) {
    printf("Lucky\n");
  }else {
    printf("Unlucky\n");
  }

  return 0;
}