#include<stdio.h>
int GCD_iterative(int m, int n)
{    
    int r;
    if(m<n)
    {
       r=m;
       m=n;
       n=r;
    }
    if(m%n==0) return n;
    else return GCD_iterative(n,m%n);
}

int LCM(int m, int n)
{
    int a=GCD_iterative(m,n);
    int b;
    b=m*n/a;
    return b;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
} 
