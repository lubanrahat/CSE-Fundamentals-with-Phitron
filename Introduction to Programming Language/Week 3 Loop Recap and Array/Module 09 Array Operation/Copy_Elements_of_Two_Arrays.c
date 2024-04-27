#include <stdio.h>

int main() {

  int arr1[] = {1,2,3,4,5,6,7};
  int n1 = sizeof(arr1)/sizeof(int);
  int arr2[] = {8,9,10};
  int n2 = sizeof(arr2)/sizeof(int);
  int answer[n1+n2];

  for(int i=0;i<n1;i++) {
    answer[i]=arr1[i];
  }
  int j = 0;
  for(int i=n1;i<n1+n2;i++) {
    answer[i]=arr2[j];
    j++;
  }

  for(int i=0;i<n1+n2;i++) {
    printf("%d ",answer[i]);
  }
  printf("\n");
  return 0;
}