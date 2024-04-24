#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int count[7]={0};

  for(int i=0;i<n;i++) {
    int val=arr[i];
    count[val]++;
  }

  printf("2 -> %d\n",arr[2]);
  printf("5 -> %d\n",arr[5]);
  printf("7 -> %d\n",arr[7]);


  return 0;
}