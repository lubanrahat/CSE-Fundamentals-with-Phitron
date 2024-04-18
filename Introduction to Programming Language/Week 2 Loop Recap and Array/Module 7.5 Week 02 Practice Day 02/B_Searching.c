#include <stdio.h>

int main() {

  int n,target,answer = -1;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&target);
  for(int i=0;i<n;i++) {
    if(arr[i]==target) {
      answer=i;
      break;
    }
  }

  printf("%d\n",answer);    

  return 0;
}