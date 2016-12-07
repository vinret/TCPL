#include<stdio.h>
int GCD_iterative(int a,int b)
{
    if(0==b)  return a;
    else      return GCD_iterative(b,a%b);
}
int LCM(int m,int n)
{
    int i,j,k;
    i=GCD_iterative(m,n);
    j=m*n;
    k=j/i;
    return k;
}
int main()
{
    int p,q,x;
    scanf("%d %d",&p,&q);
    x=LCM(p,q);
    printf("最小公倍数为:%d\n",x);
    return 0;
}

