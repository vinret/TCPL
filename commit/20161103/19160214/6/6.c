#include<stdio.h>
int Factorial(const int N);

int Factorial(const int N)
{
    int p,i;
    if(N>=0)
    {
       for(p=1,i=1;i<=N;i++)
           p*=i;
       return p;
    }
    else
       return 0;
}

int main()
{
    int N,NF;

    scanf("%d",&N);
    NF = Factorial(N);
    if(NF) printf("%d! = %d\n",N,NF);
    else printf("Invalid input\n");

    return 0;
}        
