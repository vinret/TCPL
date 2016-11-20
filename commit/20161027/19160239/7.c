#include<stdio.h>
int main()
{
int x=1,a,b,c,d,step=0;
scanf("%d %d %d",&a,&b,&c);
while(step!=b)
{
x=x*a;
step++;
}
d=x%c;
printf("the result is:%d\n",d);
return 0;
}
