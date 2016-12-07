#include<stdio.h>
int GCD_iterative(int m,int n)
{
int a;
if(m>n) 
{
a=n;
n=m%n;
m=a;
if(n!=0) GCD_iterative(m,n);
if(n==0) printf("%d is the greatest common\n",a);
}
if(m<n) GCD_iterative(n,m);
return 0;
}




int main()
{
int m,n;
scanf("%d %d",&m,&n);
GCD_iterative(m,n);
return 0;
}
