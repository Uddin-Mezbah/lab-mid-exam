#include <stdio.h>
#include <string.h>

int main()
{
  int n,i;
  int ary[100];


  scanf("%d",&n);

  int pritom_bhai =0;
  for(i=1 ;i<=n;i++){
    scanf("%d",&ary[i]);
    if (ary[i]>pritom_bhai){
        pritom_bhai=ary[i];
    }
  }
  int sum = 0;
  for(i=1;i<=n;i++){
    sum += (pritom_bhai-ary[i]);
  }
  printf("%d",sum);

}
