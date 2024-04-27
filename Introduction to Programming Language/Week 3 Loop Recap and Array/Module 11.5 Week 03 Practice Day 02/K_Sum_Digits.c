#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n,sum=0;
  scanf("%d",&n);
  char s[10001];
  scanf("%s",s);

  for(int i=0;i<n;i++) {
    sum+=s[i]-'0';
  }
  printf("%d\n",sum);

  return 0;
}