/*invert(x,p,n)*/
#include<stdio.h>
int main()
{
 unsigned x,a,b;
 int p,n;

 printf("x=");
 scanf("%o",&x);
 printf("p=");
 scanf("%d",&p);
 printf("n=");
 scanf("%d",&n);

 a=x&(~((~(~0<<n))<<(p+1-n)));//get the same part
 b=(~(x&((~(~0<<n))<<(p+1-n))))&((~(~0<<n))<<(p+1-n));//get the part of the change
 x=a|b;
 
 printf("x=%o\n",x);

 return 0;
}
 
