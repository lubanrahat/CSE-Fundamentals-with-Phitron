#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int nextNumber(int n) {
  int next;
  if(n==1) {
    next=6;
  }else if(n==3) {
    next=7;
  }else if(n==5) {
    next=8;
  }else if(n==7) {
    next=9;
  }else if(n==9) {
    next=10;
  }else if(n==11) {
    next=11;
  }else if(n==13) {
    next=12;
  }else if(n==15) {
    next=13;
  }else if(n==17) {
    next=14;
  }else if(n==19) {
    next=15;
  }else if(n==21) {
    next=16;
  }
  return next;
}

int main() {

  int n;
  scanf("%d",&n);

  int row=nextNumber(n);

  for(int i=0;i<row;i++) {
    for(int s1=0;s1<row-i-1;s1++) {
      printf(" ");
    } 
    for(int j=0;j<2*i+1;j++) {
      printf("*");
    }
    printf("\n");
  }

  for(int i=1;i<=5;i++) {
    for(int space=1;space<=5;space++) {
      printf(" ");
    }
    for(int j=1;j<=n;j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}