#include<stdio.h>
int GCD_recursive(int m,int n)
{
    if(m<n)
{
    m=m^n;
    n=m^n;
    m=m^n;
}
    if(m%n==0)
    return n;
    else  return GCD_recursive;
}
int LCM(int m,int n)
{
    int i,c;
    int k=GCD_recursive(m,n);
    i=m/k;
    c=n/k;
    return i*c*k;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
}
