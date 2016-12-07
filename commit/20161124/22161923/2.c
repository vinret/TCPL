#include<stdio.h>
int GCD_recursive(int m,int n)
{
    if(m<n){
        m=m^n; n=m^n; m=m^n;
    }
    if(0==m%n) return n;
    else       return GCD_recursive(n,m%n);
}
int LCM(int m,int n)
{
    int k=GCD_recursive(m,n);
    int m1,n1;
    m1=m/k;
    n1=n/k;
    return m1*n1*k;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",LCM(m,n));
    
    return 0;
}     
