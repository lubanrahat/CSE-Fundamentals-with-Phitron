#include <stdio.h>

int main() {

  int x,y,mina,rina;
  scanf("%d%d",&x,&y);

  mina = (x+y)/2;
  rina = (x-y)/2;

  printf("%d %d\n",mina,rina);

  return 0;
}