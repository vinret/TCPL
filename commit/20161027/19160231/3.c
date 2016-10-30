#include<stdio.h>
int main()
{
int x,n=0;
printf("please input a number x(x<=1000)= \n");
scanf("%d",&x);
if(x>1000||x<=0)
{
printf("error!\n");
 return 1;}
 while(x!=1)
{if (x%2==0)
{x=x/2,n++;}
else{ x=(3*x+1)/2,n++;}
}
printf("%d\n",n);
return 0;
}
