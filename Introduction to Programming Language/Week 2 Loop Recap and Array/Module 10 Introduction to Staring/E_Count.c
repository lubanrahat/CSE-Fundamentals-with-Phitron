#include <stdio.h>
#include <string.h>

int main() {

  char S[1000001];
  int sum=0;
  scanf("%s",S);

  for(int i=0;i<strlen(S);i++) {
    sum += (S[i]-'0');
  }

  printf("%d\n",sum);

  return 0;
}