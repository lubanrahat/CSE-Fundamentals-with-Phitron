#include <stdio.h>
#include <limits.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int minIndex,maxIndex,min,max;
  min =INT_MAX;
  max=INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]<min) {
      min=arr[i];
      minIndex=i;
    }
    if(arr[i]>max) {
      max=arr[i];
      maxIndex=i;
    }
  }  

  int temp = arr[minIndex];
  arr[minIndex]=arr[maxIndex];
  arr[maxIndex]=temp;
  
  for(int i=0;i<n;i++) 
    printf("%d ",arr[i]);
  printf("\n");  

  return 0;
}