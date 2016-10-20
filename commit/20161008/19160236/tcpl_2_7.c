
#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
int main()
{
int p,n;
unsigned x;
printf("please input x=");
printf("please input p=");
printf("please input n=");
scanf("%d,%d,%d\n",&x,&p,&n);
return 0;
}










unsigned invert(unsigned x,int p,int n)
{
return(x&~((~(~0<<n))<<p)|((~x)&((~(~0<<n))<<p)));
}
