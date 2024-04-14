#include <stdio.h>

int main() {

  long long int n,answer=0;
  scanf("%lld",&n);

  while(n!=0) {
    int digit=n%10;
    answer=answer*10+digit;
    n/=10;
  }
  printf("%lld\n",answer);

  return 0;
}