#include<stdio.h>
int LCM(int m,int n)
{
int a,b;
b=m*n;
if(m>n)
{
while(n!=0)
{
a=n;
n=m%n;
m=a;
}
if(n==0) printf("%d is the least common multiple\n",b/a);
}
if(m<n) LCM(n,m);
return 0;
}


int main()
{
int m,n;
scanf("%d %d",&m,&n);
LCM(m,n);
return 0;
}

