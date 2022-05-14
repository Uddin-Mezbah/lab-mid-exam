#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        char str[n],temp;
        scanf("%s",str);

        int i,j,count1=0,count2=0;
        for(i=0; i<strlen(str)-1; i++){


            if(str[i]==str[i+1])
            {
                count1++;
            }
        }
        for(i=0; i<strlen(str); i++){

            for(j=0; j<strlen(str)-1; j++)
            {
                if(str[j]>=str[j+1])
                {
                    temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                }
            }
        }
        for(i=0; i<strlen(str)-1; i++){


            if(str[i]==str[i+1])
            {
                count2++;
            }
        }

        if(count1!=count2) puts("NO");
        else puts("YES");
    }

}
