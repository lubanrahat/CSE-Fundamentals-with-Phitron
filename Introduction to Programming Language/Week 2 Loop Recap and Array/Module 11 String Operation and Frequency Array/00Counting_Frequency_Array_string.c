#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  char s[1001];
  scanf("%s",s);
  int count[26]={0};
  for(int i=0;i<strlen(s);i++) {
    int val=s[i]-'a';
    count[val]++;
  }

  for(int i=0;i<26;i++) {
    if(count[i]!=0)
      printf("%c -> %d\n",i+'a',count[i]);
  }

  return 0;
}