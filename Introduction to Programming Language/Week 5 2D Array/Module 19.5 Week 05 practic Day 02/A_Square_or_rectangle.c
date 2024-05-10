#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == b) {
      printf("Square\n");
    }else {
      printf("Rectangle\n");
    }
  }

  return 0;
}