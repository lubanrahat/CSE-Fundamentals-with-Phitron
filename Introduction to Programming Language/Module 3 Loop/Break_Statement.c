#include <stdio.h>

int main() {

  int n;
  scanf("%d",&n);

  for(int i=1;i<=n;i=i+1) { 
    printf("%d\n",i);
    if(i==5) {
      break;
    }
  } 

  return 0;
}