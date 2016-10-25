#include<stdio.h>
int main()
{
int p,n;
unsigned x,y;
printf("please input x=");
printf("please input y=");
printf("please input p=");
printf("please input n=");
scanf("%d,%d,%d,%d\n",&x,&y,&p,&n);
return 0;
}
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
return x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
}
