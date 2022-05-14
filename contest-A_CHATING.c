//#include<stdio.h>
//int main()
//{
//    char s[100];
//    int i,a[96]= {0},n;
//    gets(s);
//    for(i=0; s[i]; i++)
//        a[s[i]-32]=1;
//    for(n=i=0; i<96; i++)
//        n+=a[i];
//
//    printf(n%2==0? "CHAT WITH HER!" : "IGNORE HIM!");
//    return 0;
//}

#include<stdio.h>


int main()
{
    char str[100];
    int i,n;
    int str2[26];
	gets(str);

	for(i=0;str[i];i++){
		str2[str[i]-97]=1;
	}
	for(i=0;i<26;i++){
		n+=str2[i];
	}
	if(n%2==0){
		printf("CHAT WITH HER!");
	}
	else{
		printf("IGNORE HIM!");
	}
}
