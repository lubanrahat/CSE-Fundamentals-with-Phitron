#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void world() {
  printf("World start\n");
  printf("World end\n");
}
void hello() {
  printf("hello start\n");
  world();
  printf("hello end\n");
}

int main() {
  
  printf("Main start\n");
  hello();
  printf(" Main end\n");
  
  return 0;
}