#include<stdio.h>
int main()
{
   char str[] = "hello";

   char str2[10];
   //str2 = str;
   int i = 0;
   while (str[i] != '\0'){
    str2[i] = str[i];
    i++;
   }
   str2[i] = '\0';
   printf("%s",str2);


}
