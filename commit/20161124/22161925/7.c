#include<stdio.h>
int main()
{
    int M,N,i,j;
    scanf("%d %d",&N,&M);
    int a[N+1];
    for(i=0;i<N;i++)
    {
        j=(M+i)%N;
        scanf("%d",&a[j]);
    }
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
        if(i<N-1) printf(" ");
    }
    return 0;
}

