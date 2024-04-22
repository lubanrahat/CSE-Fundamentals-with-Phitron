#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  char S[1000001];
  scanf("%s",S);
  for(int i=0;i<strlen(S);i++) {
    if(S[i]>='a' && S[i]<='z') {
      S[i]=toupper(S[i]);
    }else if(S[i]==',') {
      S[i]=' ';
    }else {
      S[i]=tolower(S[i]);
    }
  }
  printf("%s\n",S);

  return 0;
}