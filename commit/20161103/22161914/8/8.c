#include<stdio.h>
int fac(int n)
{
    if(n==1) return 1;
    else
    z=n*fac(n-1);
    return z;
}
int fac_bit_count(int n)
{
    int i=fac(n),t=0;
    while(i>0)
{
    i=i/10;
    t++;
}
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d!=%d.共%位\n",n,fac(n),fac_bit_count(n));
    return 0;
}
