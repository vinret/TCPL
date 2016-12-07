#include <stdio.h>
#include <math.h>
int main()
{
    int M,N,flag=0;
    int i,j,k=0,a[10000];
    scanf("%d%d",&M,&N);
    for(i=2;k<=N;i++)
    {
        for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            flag=1;
    }
    if(flag==0)
    {
        a[k]=i;
        k=k+1;
    }
    flag=0;
    }
    for(i=(M-1);i<(k-1);i++)
    {
        if((i-M+2)%10==0)
            printf("%d\n",a[i]);
        else
            printf("%d\t",a[i]);
    }
    return 0;
}
