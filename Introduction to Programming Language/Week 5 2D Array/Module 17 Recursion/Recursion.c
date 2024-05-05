#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void print() {
  printf("Hello world\n");
  print();
} 

int main() {

  print();

  return 0;
}