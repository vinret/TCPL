#include<stdio.h>
int GCD_iterative(int m,int n)
{
    if(m<n){
    m=m^n;
    n=m^n;
    m=m^n;
}
    if(m%n==0)
     return n;
     else
     return GCD_iterative(m,m%n);
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",GCD_iterative(m,n));
    return 0;
}
