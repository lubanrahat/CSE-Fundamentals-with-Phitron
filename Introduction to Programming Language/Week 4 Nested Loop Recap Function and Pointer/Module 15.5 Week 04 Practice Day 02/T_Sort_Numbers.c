#include <stdio.h>
#include <string.h>

int min(int a,int b) {
  if(a<b) return a;
  return b;
}

int main() {

  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);

  int arr[3];
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;

  for(int i=0;i<3;i++) {
    for(int j=i+1;j<3;j++) {
      if(arr[i]>arr[j]) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }

  for(int i=0;i<3;i++) printf("%d\n",arr[i]);

  printf("\n");

  printf("%d\n%d\n%d\n",a,b,c);

  return 0;
}