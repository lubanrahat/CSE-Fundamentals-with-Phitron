#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int s=n-1;
  int c=1;
  for(int i=1;i<=2*n-1;i++) {
    for(int j=1;j<=s;j++) {
      printf(" ");
    }
    for(int j=1;j<=c;j++) {
      if(i%2==0)
        printf("-");
      else 
        printf("#");
    }
    if(i<n) {
      s--;
      c+=2;
    }else {
      s++;
      c-=2;
    }
    printf("\n");
  }

  return 0;
}