#include<stdio.h>
int GCD_recursive(int m,int n)
{
int a;
if(m>n)
{
while(n!=0)
{
a=n;
n=m%n;
m=a;
}
printf("%d is the greatest common\n",a);
}
if(m<n) GCD_recursive(n,m);
}

int main()
{
int m,n;
scanf("%d %d",&m,&n);
GCD_recursive(m,n);
return 0;
}







