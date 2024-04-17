#include <stdio.h>

int main() {

  char ch;
  scanf("%c",&ch);

  if(ch >= 'A' && ch <= 'Z') {
    printf("ALPHA\nIS CAPITAL\n");
  }else if(ch >= '0' && ch <= '9') {
    printf("IS DIGIT\n");
  }else {
    printf("ALPHA\nIS SMALL\n");
  }

  return 0;
}