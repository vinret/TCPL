#include<stdio.h>
unsigned invert(unsigned x,int p,int n);

main()
{
unsigned x;
int p,n;
x=111;
p=2;
n=3;
invert(x,p,n);

}

unsigned invert(unsigned x,int p,int n);

{
return ~(x&~(~0<<n)<<p)&(x|~(~0<<n)<<p);
}
