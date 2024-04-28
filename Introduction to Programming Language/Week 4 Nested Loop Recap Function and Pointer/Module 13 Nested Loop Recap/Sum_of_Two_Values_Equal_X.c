#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  int target,falg=0;
  scanf("%d",&target);

  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if((arr[i]+arr[j])==target) {
        falg=1;
      }
    }
  }
  if(falg) {
    printf("YES\n");
  }else {
    printf("NO\n");
  }
  
  return 0;
}