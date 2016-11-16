#include<stdio.h>

int Factorial( const int N );

int main()
{
    int N,NF;
    
    scanf("%d", &N);
    NF=Factorial(N);
    if (NF) printf("%d!=%d\n", N,NF);
    else printf("Invalid input\n");

   return 0;
}
int Factorial(const int N)
{
    int fac=1,n=N;
    if(n==0||n==1)  return 1;
    for( ;n>0;n--)  fac*=n;
    return fac;
}

         

