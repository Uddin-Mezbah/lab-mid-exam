#include<stdio.h>
int main()
{
   printf("Enter your name: ");

   char name[20];
//   scanf("%s", name);
//   printf("Hello,%s\n",name);

    //gets(name);
    fgets(name,10,stdin);
    printf("Hello,%s\n",name);


}

