#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int countVowel(char str[],int i) {
  if(str[i]=='\0') return 0;
  int ans = countVowel(str,i+1);
  if(str[i]>='A' && str[i]<='Z') {
    str[i] = str[i]+32;
  }
  if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u') {
    return ans+1;
  }else {
    return ans;
  }
}

int main() {

  char str[1001];
  scanf("%[^\n]s", str);

  int count = countVowel(str,0);

  printf("%d\n",count);

  return 0;
}