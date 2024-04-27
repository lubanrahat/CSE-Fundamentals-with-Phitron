#include <stdio.h>
#include <string.h>

int length(char S[100]) {
  int i=0,cnt=0;
  while(S[i]!='\0') {
    cnt++;
    i++;
  }
  return cnt;
}

int main() {

  char S[100];
  scanf("%[^\n]%*c",S);

  for(int i=0;i<length(S);i++) {
    if(S[i]=='\\') break;;
    printf("%c",S[i]);
  }
  printf("\n");

  return 0;
}