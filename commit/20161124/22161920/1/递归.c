#include<stdio.h>
int GCD_recursive(int m,int n);

int main()
{
int m,n,t;
printf("请输入两个数：\n");
scanf("%d%d",&m,&n);
t=GCD_recursive(m,n);
printf("%d和%d的最大公约数为%d\n",m,n,t);
return 0;
}

int GCD_recursive(int m,int n)
{
int r;
r=m%n;
if(r==0)
return n;
else
{
m=n;
n=r;
return GCD_recursive(m,n);
}}
