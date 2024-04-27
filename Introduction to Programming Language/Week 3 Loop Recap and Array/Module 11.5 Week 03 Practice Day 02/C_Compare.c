#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  char a[101],b[1001];
  scanf("%s %s",a,b);
  
  int value = strcmp(a,b);

  if(value<0 && value!=0) {
    printf("%s\n",a);
  }else {
    printf("%s\n",b);
  }

  return 0;
}