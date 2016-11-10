#include<stdio.h>
int main()
{
    int A,B,D;
    int a[31];
    scanf("%d%d%d",&A,&B,&D);
    int sum=A+B;
    int num=0;
    int i;
    do
    {
      a[num++]=sum%D;
      sum=sum/D;
    }
    while(sum!=0);
    for( i=num-1;i>=0;i--)
    {
      printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
    
