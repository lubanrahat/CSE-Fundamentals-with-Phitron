#include <stdio.h>
#include <string.h>

int main() {

  char a[1001],b[1001];
  scanf("%s %s",a,b);

  int val = strcmp(a,b);

  if(val<0) {
    printf("A choto\n");
  }else if(val>0) {
    printf("B choto\n");
  }else {
    printf("Same\n");
  }


  return 0;
}