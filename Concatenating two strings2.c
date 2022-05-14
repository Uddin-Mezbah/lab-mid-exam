#include<stdio.h>
#include<stdio.h>
int main()
{
   char a [10] = "Hello";
   char b [100] = "world";

//   int lena = strlen(a);
//   int lenb = strlen(b);
//
//   for (int i = 0; i<lenb; i++){
//        a[lena+i] = b[i];
//   }
//   a[lena+lenb] = '\0';
//   printf("%s",a);

   //strcat(a,b);
   strncat(a,b,9);
   a[9] = '\0';
   printf("%s",b);



}


