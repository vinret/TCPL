#include<stdio.h>
int main()
{int n,i=0;
printf("请输入一个正整数：");
scanf("%d",&n);
while(n>1)
{
if(n%2==0)
{n=n/2;i=i+1;}
else
{n=(3*n+1)/2;i=i+1;}}
printf("%d\n",i);
return 0;
}
