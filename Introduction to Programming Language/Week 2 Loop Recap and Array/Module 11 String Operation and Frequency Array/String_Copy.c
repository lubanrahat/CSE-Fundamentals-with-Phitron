#include <stdio.h>
#include <string.h>

int main() {

  char str1[1001];
  char str2[1001];
  scanf("%s",str1);

  int n=strlen(str1);
  for(int i=0;i<=n;i++) {
    str2[i]=str1[i];
  }

  char str3[10001];
  strcpy(str3,str1);

  printf("%s\n",str2);
  printf("%s\n",str3);

  

  return 0;
}