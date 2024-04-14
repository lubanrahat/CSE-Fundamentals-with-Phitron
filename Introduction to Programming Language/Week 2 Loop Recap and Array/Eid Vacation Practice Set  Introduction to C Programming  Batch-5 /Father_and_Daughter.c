#include <stdio.h>

int main() {

  int n,daughterAge,fatherAge;
  scanf("%d",&n);

  fatherAge = (4*n)/5;
  daughterAge = n/5;

  printf("%d %d",fatherAge,daughterAge);

  return 0;
}