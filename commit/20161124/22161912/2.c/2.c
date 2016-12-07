#include<stdio.h>
int LCM(int m,int n)
{
    int a,b;
    b=m*n;
    if(m<n)
    {
       m=m^n;
       n=n^m;
       m=m^n;
    }
    a=m%n;
    while(a)
    {
       m=n;
       n=a;
       a=m%n;
    }
    return b/n;
}
int main()
{
    int m,n,a;
    scanf("%d%d",&m,&n);
    a=LCM(m,n);
    printf("%d\n",a);
    return 0;
}
