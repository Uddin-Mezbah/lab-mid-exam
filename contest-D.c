#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000];
  scanf("%s", str);
   if(str[0] >'Z') {
         str[0] = str[0] -32;
    }
  printf("%s", str);

}
