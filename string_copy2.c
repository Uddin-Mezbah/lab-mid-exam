#include<stdio.h>
#include<stdio.h>
int main()
{
   char str[] = "helloworld";
   char str2[10];

   strncpy(str2,str,9);
   str2[9] = '\0';

   printf("%s",str2);


}

