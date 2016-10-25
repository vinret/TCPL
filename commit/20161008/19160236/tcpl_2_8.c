#include<stdio.h>
int main()
{
int n;
unsigned x;
printf("please input x=");
printf("please input n=");
scanf("%d,%d\n",&x,&n);
return 0;
 }
unsigned rightrot(unsigned x,unsigned n)
{
while(n>0)
{
if((x&1)==1)
x=(x>>1)|~(~0>>1);
else
x=(x>>1);
n--;
}
return x;
}
