#include<stdio.h>
int GCD_iterative(int m,int n);

int GCD_iterative(int m,int n)
{
int x;
x=m%n;
m=n;
n=x;
if(n==0) return m;
GCD_iterative(m,n);
}

int main()
{
int m,n,k;
scanf("%d%d",&m,&n);
if(m<n)
{
k=m;
m=n;
n=k;
}
GCD_iterative(m,n);
printf("%d\n",GCD_iterative(m,n));
return 0;
}
