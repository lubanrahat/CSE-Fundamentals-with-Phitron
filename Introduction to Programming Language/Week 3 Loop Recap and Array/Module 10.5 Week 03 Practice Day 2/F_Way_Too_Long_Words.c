#include <stdio.h>
#include <string.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    char s[1110];
    scanf("%s",s);
    int size=strlen(s);
    if(size<=10) {
      printf("%s\n",s);
    }else {
      printf("%c%d%c\n",s[0],size-2,s[size-1]);
    }
  }

  return 0;
}