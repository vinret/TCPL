#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
int main()
{
int a=5,b=10,c=13;
int x;
printf("Please input a number\n");
scanf("%d",&x);
if (x<0)
x=-x;
else
x=x;
if (sqrt(x)==(4*a)/(b*c))
printf("zou you liang bian xiang deng\n");
else
printf("zuo you liang bian bu deng\n");
}
