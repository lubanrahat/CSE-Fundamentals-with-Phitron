#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int tt;
  scanf("%d",&tt); 

  while(tt--) {
    int upper=0,lower=0,digit=0;
    char s[100001];
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++) {
      if(s[i]>='A' && s[i]<='Z') {
        upper++;
      }else if(s[i]>='a' && s[i]<='z') {
        lower++;
      }else if(s[i]>='0' && s[i]<='9') {
        digit++;
      }
    }
    printf("%d %d %d\n",upper,lower,digit);

  }

  return 0;
}