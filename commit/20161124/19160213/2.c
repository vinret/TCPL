#include<stdio.h>

int LCM(int m,int n)
{
int a,b;
b=m*n;
if(m<n)
{
a=m;
m=n;
n=a;
}
while(n!=0)
{
m=m%n;
a=m;
m=n;
n=a;
}
m=b/m;
return m;
}

int main()
{
int m,n;
scanf("%d %d",&m,&n);
m=LCM(m,n);
printf("%d\n",m);
return 0;
}
