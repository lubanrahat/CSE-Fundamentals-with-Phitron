#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int my_len(char arr[]) {
  int i=0,cnt=0;
  while(arr[i]!='\0') {
    cnt++;
    i++;
  }
  return cnt;
}

int main() {

  char arr[100];
  scanf("%s",arr);

  printf("%d\n",my_len(arr));

  return 0;
}