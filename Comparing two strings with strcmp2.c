#include<stdio.h>
#include<stdio.h>
int main()
{

  char a[100],b[100];
  //scanf("%s %s", a, b);
  scanf("%s\n%s", a, b);

  int val = strcmp(a, b);
  printf("%d", val);
}




