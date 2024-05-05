#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int fun(char a[],int i) {
  if(a[i]=='\0') return 0;
  int len=fun(a,i+1);
  return len+1;
}

int main() {

  char a[6] = "hello";
  int length=fun(a,0);
  printf("%d\n",length);

  return 0;
}