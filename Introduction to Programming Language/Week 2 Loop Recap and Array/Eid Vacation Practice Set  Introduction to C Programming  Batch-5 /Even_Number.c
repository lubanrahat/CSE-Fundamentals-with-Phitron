#include <stdio.h>

int main() {

  int n,sum = 0;
  scanf("%d",&n);

  int start = n/5-4;

  for(int i=start;i<n;i+=2) {
    sum+=i;
    printf("%d ",i);
    if(n==sum) break;
  }
  
  printf("\n");



  return 0;
}