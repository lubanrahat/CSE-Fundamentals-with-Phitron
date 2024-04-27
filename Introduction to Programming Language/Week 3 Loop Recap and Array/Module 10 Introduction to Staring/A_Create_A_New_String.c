#include <stdio.h>

int length(char S[]) {
  int i=0,cnt=0;
  while(S[i]!='\0') {
    cnt++;
    i++;
  }
  return cnt;
}

int main() {

  char S1[1001];
  char S2[1001];
  scanf("%s %s",S1,S2);

  printf("%d %d\n",length(S1),length(S2));
  printf("%s %s\n",S1,S2);

  return 0;
}