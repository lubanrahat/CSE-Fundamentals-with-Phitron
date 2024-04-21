#include <stdio.h>

void printArray(int arr[],int n) {
  for(int i=0;i<n;i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main() {

  int insertIndex,value,n;
  scanf("%d %d %d",&n,&insertIndex,&value);
  int arr[n+1];
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  for(int i=n;i>=1;i--) {
    arr[i]=arr[i-1];
  }
  arr[insertIndex]=value;
  
  printArray(arr,n+1);

  return 0;
}