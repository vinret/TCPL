#include<stdio.h>
int Factorial(const int N)
int main()
{
    int N,NF;

    scanf("%d",&N);
    NF=Factorial(N);
    if(NF) printf("%d!=%d\n",N,NF);
    else printf("Invalid input\n");

    return 0;
}

    int Factorial(const int N)
{
    int NF=1,i;
    if(N<0) return 0;
    else for(i=0;i<=N;i++)
    NF=i*i;
    return NF;
}
