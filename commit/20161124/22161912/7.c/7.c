#include<stdio.h>
int main()
{
    int N,M,i,a[100];
    scanf("%d%d\n",&N,&M);
    for(i=0;i<N;i++)
       scanf("%d",&a[i]);
    M%=N;
    for(i=N-M;i<N;i++)
       printf("%d ",a[i]);
    for(i=0;i<N-M-1;i++)
       printf("%d ",a[i]);
    printf("%d\n",a[N-M-1]);
    return 0;
}

