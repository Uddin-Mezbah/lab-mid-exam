#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);

    int score[n];
    for (int i =0; i<n;i++ ){
    scanf("%d",&score[i]);
    }
    int answer = 0,minvalue = score[0],maxvalue = score[1];
    for (int i=0; i<n; i++){
            if(i==0)continue;
            bool isMax=score[i]>maxvalue,isMin = true;

            if(score[i] > maxvalue || score[i]<minvalue){
                answer++;
            }

            if(score[i] > maxvalue){
                maxvalue = score[i];
            }

            if(score[i]<minvalue){
                minvalue = score[i];
            }

            }




    printf("%d\n",answer);
}






