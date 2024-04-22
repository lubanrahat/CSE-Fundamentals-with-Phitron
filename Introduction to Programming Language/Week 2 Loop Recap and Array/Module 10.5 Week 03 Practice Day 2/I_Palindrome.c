#include <stdio.h>
#include <string.h>

int main() {

  char s[100001];
  scanf("%s",s);

  int start=0,end=strlen(s)-1,ans=1;

  while(start<=end) {
    if(s[start]!=s[end]) {
      ans=0;
      break;
    } 
    start++;
    end--;
  }
  if(ans) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }

  return 0;
}