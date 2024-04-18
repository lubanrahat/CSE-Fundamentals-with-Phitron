#include <stdio.h>

int main() {

  int arr[10] = {1,2,3,4,5,6,7,8,9,20};

  printf("arr[0] = %d\n",arr[0]);
  printf("arr[1] = %d\n",arr[1]);
  printf("arr[2] = %d\n",arr[2]);
  printf("arr[3] = %d\n",arr[3]);
  printf("arr[4] = %d\n",arr[4]);
  printf("arr[5] = %d\n",arr[5]);
  printf("arr[6] = %d\n",arr[6]);
  printf("arr[7] = %d\n",arr[7]);
  printf("arr[8] = %d\n",arr[8]);
  printf("arr[9] = %d\n",arr[9]);

  printf("\n");

  for(int i=0;i<10;i++) {
    printf("arr[%d] = %d\n",i,arr[i]);
  }



  return 0;
}