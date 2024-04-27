#include <stdio.h>
#include <string.h>

int main() {

  char s1[101];
  char s2[101];
  scanf("%[^\n]%*c",s1);
  scanf("%[^\n]%*c",s2);
  int sizeS1=strlen(s1),sizeS2=strlen(s2),j=0;
  printf("%d %d\n",sizeS1,sizeS2);

  char concatenating[1001];
  for(int i=0;i<sizeS1;i++) {
    concatenating[j]=s1[i];
    j++;
  }
  for(int i=0;i<sizeS2;i++) {
    concatenating[j]=s2[i];
    j++;
  }
  int sizeConcatenating = sizeS1+sizeS2;
  concatenating[sizeConcatenating]='\0';
  printf("%s\n",concatenating);

  char temp=s1[0];
  s1[0]=s2[0];
  s2[0]=temp;
  printf("%s %s\n",s1,s2);

  return 0;
}