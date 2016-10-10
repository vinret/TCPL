#include<stdio.h>
int setbits(int x,int p,int n,int y)
{
	x=x&~(~(~0<<n)<<(p+1-n))|(y&~(~0<<n))<<(p+1-n);
	return x;
}
