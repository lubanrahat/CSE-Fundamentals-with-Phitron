#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    int M1,M2,D,sum;
    scanf("%d %d %d",&M1,&M2,&D);
    sum=M1+M2;
    float answer=(M1*D)/sum;

    printf("%.0f\n",D-answer);
  }

  return 0;
}