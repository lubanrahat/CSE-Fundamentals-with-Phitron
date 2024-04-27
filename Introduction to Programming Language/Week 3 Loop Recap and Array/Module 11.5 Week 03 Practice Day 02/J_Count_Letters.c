#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  char s;
  int count[26]={0};

  while(scanf("%c",&s) != EOF) {
    int val=s-'a';
    count[val]++;
  }

  for(int i=0;i<26;i++) {
    if(count[i]>0)
      printf("%c : %d\n",i+'a',count[i]);
  }

  return 0;
}