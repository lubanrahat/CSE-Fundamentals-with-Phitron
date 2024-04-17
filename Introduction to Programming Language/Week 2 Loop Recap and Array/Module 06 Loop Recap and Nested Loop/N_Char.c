#include <stdio.h>

int main() {

  char ch;
  scanf("%c",&ch);

  if(ch >= 'a' && ch <= 'z') {
    ch = ch+('A'-'a');
  }else {
    ch = ch-('A'-'a');
  }

  printf("%c\n",ch);

  return 0;
}