#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int tt;
  scanf("%d",&tt);

  while(tt--) {
    int n,flag=-1,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    scanf("%d",&target);
    for(int i=0;i<n;i++) {
      if(arr[i]==target) {
        flag=i;
      }
    } 

    if(flag!=-1) {
      printf("YES\n");
    }else {
      printf("NO\n");
    }
  }

  return 0;
}