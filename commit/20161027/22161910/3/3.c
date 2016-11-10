#include<stdio.h>
int main()
{
int n,i=0;
printf("input n:");
scanf("%d",&n);
while (n!=1)
{
if(n%2==0)
{
n=n/2;
i++;}
else
{
n=(3*n+1)/2;
i++;}
}
printf("%d\n",i);
return 0;
}
