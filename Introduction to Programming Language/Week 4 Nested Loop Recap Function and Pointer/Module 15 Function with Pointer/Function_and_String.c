#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void fun(char *arr) {
  printf("size of string: %lu\n",strlen(arr));
}

int main() {

  char ch[6]="Hello";
  fun(ch);

  return 0;
}