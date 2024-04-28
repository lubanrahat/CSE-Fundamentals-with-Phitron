#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(int i=0;i<n;i++) {
    int j=i+1;
    while(j<n) {
      if(arr[i]>arr[j]) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
      j++;
    }
  }

  for(int i=0;i<n;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");

  return 0;
}