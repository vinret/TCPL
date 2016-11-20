#include<stdio.h>
int main()
{
int step=0,n;
printf("please input n(n<=1000):");
scanf("%d",&n);
do
{
if(n%2==0)
n=n/2;
else
n=(3*n+1)/2;
step++;
}while(n>=2);
printf("step=%d\n",step);
return 0;
}

