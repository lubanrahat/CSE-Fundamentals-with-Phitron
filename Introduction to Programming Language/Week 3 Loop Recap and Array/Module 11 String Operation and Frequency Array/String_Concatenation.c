#include <stdio.h>
#include <string.h>

int main() {

  char a[1001],b[1001];
  scanf("%s %s",a,b);
  char concat[strlen(a)+strlen(b)];

  int j=0;
  for(int i=0;i<strlen(a);i++) {
    concat[j]=a[i];
    j++;
  }
  for(int i=0;i<=strlen(b);i++) {
    concat[j]=b[i];
    j++;
  }

  printf("%s\n",concat);

  return 0;
}