#include<stdio.h>
#include<string.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    int count=0;
    for(int  i=2;i<=n;i*=2){
        count++;
    }
    printf("%d",count);

}


//#include<stdio.h>
//int main()
//{
//    long long int n,i;
//    scanf("%lld",&n);
//
//    int count=0;
//    for( i=2;i<=n;i*=2){
//        count++;
//    }
//    printf("%d",count);
//    return 0;
//}

