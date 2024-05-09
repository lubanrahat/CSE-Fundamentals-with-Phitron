#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

long long int sumElement(int arr[],int n,int i) {
  if(i == n) return 0;
  return arr[i] + sumElement(arr,n,i+1);
}

int main() {

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) 
    scanf("%d",&arr[i]);

  long long int sum = sumElement(arr,n,0);
  printf("%lld\n",sum);  

  return 0;
}