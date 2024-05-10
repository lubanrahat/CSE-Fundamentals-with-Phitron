#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    long long int n;
    int a,b,c;
    scanf("%lld %d %d %d",&n,&a,&b,&c);
    long long int m=a*b*c;
    if(m==0) {
      if(n==0) {
          printf("0\n");
      }else {
        printf("-1\n");
      }
    }else {
      long long i =n/m;
      if(i*m == n) {
        printf("%lld\n",i);
      }else {
        printf("-1\n");
      }
    }
  }

  return 0;
}