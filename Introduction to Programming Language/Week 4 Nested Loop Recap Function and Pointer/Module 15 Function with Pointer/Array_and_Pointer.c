#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int arr[5] = {1,2,3,4,5,};
  for(int i=0;i<5;i++) {
    printf("arr[%d] = %p\n",i,&arr[i]);
    printf("%d\n",*arr+i);
    printf("%d\n",i[arr]);
    printf("%d\n",*(i+arr));
  }
  

  return 0;
}