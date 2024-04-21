#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) 
    scanf("%d",&arr[i]);
  int x,v;
  scanf("%d %d",&x,&v);
  arr[x]=v;
  int start=0,end=n-1;
  while(start<=end) {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }  
  for(int i=0;i<n;i++) printf("%d ",arr[i]);
  printf("\n");

  return 0;
}