#include<stdio.h>

int GCD_recursive(int m,int n)
{
int a;
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
return m;
}

int main()
{
int m,n;
scanf("%d %d",&m,&n);
m=GCD_recursive(m,n);
if(m==1)
printf("liang shu hu zhi\n");
else
printf("%d\n",m);	
return 0;
}

