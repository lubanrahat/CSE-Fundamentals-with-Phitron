#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void print(int i) {
  if(i==100) return;
  printf("%d\n",i);
  print(i+1);
}

int main() {

  
  print(1);

  return 0;
}