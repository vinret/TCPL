#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{
int k,m,n;
scanf("%d%d",&m,&n);
k=GCD_recursive(m, n);
printf("the highest common factor is:%d\n",k);
return 0;
}

int GCD_recursive(int m,int n)
{
int tem;
if(m<n)
{tem=m;
m=n;
n=tem;}
while(m%n !=0)
{n=m%n;
m= tem;
}
return n;
}

