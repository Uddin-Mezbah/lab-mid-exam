//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char str[100],ch;
//    int i,Count;
//    Count = 0;
//
//
//    printf("Please Enter your string: ");
//    gets(str);
//
//    printf("Enter Your Correcter: ");
//    scanf("%d",&ch);
//
//    for(i = 0; i <= strlen(str);i++){
//        if(str[i]==ch){
//            Count++;
//        }
//    }
//    printf("The Total Number of times '%c' has Occured = %d ", ch, Count);
//}

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], ch;
  	int i, Count;
  	Count = 0;

  	printf("Please Enter any String :  ");
  	gets(str);

  	printf("Input character to search:  ");
  	scanf("%c", &ch);

  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)
		{
  			Count++;
 		}
	}
	printf("Total occurrences of '%c'  = %d ", ch, Count);

  	return 0;
}
