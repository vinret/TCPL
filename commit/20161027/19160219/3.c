#include<stdio.h>
int main()
{
int x,step=0;
scanf("%d",&x);
while(x!=1)
{
if(x%2==0)
{
x=x/2;
}
else
{
x=(3*x+1)/2;
}
step=step+1;
}
printf("%d\n",step);
return 0;
}
