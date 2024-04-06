#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);

  while(n>=10) {
    int digit=n%10;
    n/=10;
  }

  if(n%2==0) {
    printf("EVEN\n");
  }else {
    printf("ODD\n");
  }

  return 0;
}