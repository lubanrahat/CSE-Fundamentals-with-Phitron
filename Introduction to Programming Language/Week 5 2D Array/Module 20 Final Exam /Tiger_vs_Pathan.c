#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int main() {

  int tt;
  scanf("%d",&tt);
  while(tt--) {
    int n;
    scanf("%d",&n);
    char str[1000001];
    scanf("%s",str);
    int pathaan=0,tiger=0;
    for(int i=0;i<n;i++) {
      if(str[i]=='P') {
        pathaan++;
      }
      if(str[i]=='T') {
        tiger++;
      }
    }
    
    if(pathaan>tiger) {
      printf("Pathaan\n");
    }else if(pathaan==tiger) {
      printf("Draw\n");
    }else {
      printf("Tiger\n");
    }
  }

  return 0;
}