#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);

  for(int i=1;i<=n;i=i+1) {
    if(i%2==0) {
      printf("%d Even Number!\n",i);
    }else {
      printf("%d Odd Number!\n",i);
    }
  }

  return 0;
}