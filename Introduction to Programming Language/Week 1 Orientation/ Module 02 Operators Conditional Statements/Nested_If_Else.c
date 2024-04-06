#include <stdio.h>

int main() {

  int tk;
  scanf("%d",&tk);

  if(tk >= 5000) {
    printf("Cox's Bazer jabao\n");
    if(tk >= 10000) {
      printf("Sent martin jabo!\n");
    }else {
      printf("Ferot chole jabo!\n");
    }
  }else {
    printf("Jabo nah!\n");
  }

  return 0;
}