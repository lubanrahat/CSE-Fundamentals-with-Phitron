#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int count2=0,count3=0;  
  for(int i=0;i<n;i++) {
    if(arr[i]%2==0 && arr[i]%3==0) {
      count2++;
    }else if(arr[i]%2==0) {
      count2++;
    }else if(arr[i]%3==0) {
      count3++;
    }
  }

  printf("%d %d\n",count2,count3);

  return 0;
}