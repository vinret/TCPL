#include<stdio.h>
void f(long n,int D)
{
     if(n>=D)
        f(n/D,D);
     printf("%ld",n%D);
}
int main()
{
    long A,B,n;
    int D;
    scanf("%ld%ld%d",&A,&B,&D);
    n=A+B;
    f(n,D);
    printf("\n");
    return 0;
}

