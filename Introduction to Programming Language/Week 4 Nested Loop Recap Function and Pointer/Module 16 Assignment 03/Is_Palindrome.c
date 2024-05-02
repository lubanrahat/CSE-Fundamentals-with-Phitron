#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool is_palindrome(char *arr) {
  int start=0,end=strlen(arr)-1;
  bool flag=true;
  while(start<=end) {
    if(arr[start]!=arr[end]) {
      flag=false;
      break;
    }
    start++;
    end--;
  }
  return flag;
}

int main() {

  char arr[10001];
  scanf("%s",arr);

  if(is_palindrome(arr)) {
    printf("Palindrome\n");
  }else {
    printf("Not Palindrome\n");
  }

  return 0;
}