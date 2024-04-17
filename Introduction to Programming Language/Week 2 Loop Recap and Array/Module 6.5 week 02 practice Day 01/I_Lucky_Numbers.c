#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);

  int lastDigit = n%10;
  n/=10;
  int firstDigit = n%10;

  if((lastDigit % firstDigit) == 0) {
    printf("YES\n");
  }else if(firstDigit % lastDigit == 0) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }

  return 0;
}