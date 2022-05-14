#include<stdio.h>
#include<stdio.h>
int main()
{
   char a [] = "Hello";
   char b [] = "world";

   int lena = strlen(a);
   int lenb = strlen(b);
   int len = strlen(a) + strlen(b);
   char c[2];

   for (int i = 0; i<lena; i++){
    c[i] = a[i];
   }
   for(int i = 0; i<lenb; i++){
    c[lena+i] = b[i];
   }
   c[lena + lenb] = '\0';
   printf("%s",c);



}

