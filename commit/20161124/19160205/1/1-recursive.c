#include<stdio.h>
int i,m,n;
int GCD_recursive(int m,int n)
{
int a;
while(m<n)
{
a=m;
m=n;
n=a;
}
while(m%n!=0)
{
i=m%n;
m=n;
n=i;
}
return n;
}
int main()
{
scanf("%d%d",&m,&n);
i=GCD_recursive(m,n);
printf("%d\n",i);
return 0;
}

