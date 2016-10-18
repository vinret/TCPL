#include<stdio.h>
unsigned rightrot(unsigned x,int n)
{
	unsigned y=x<<(32-n);
	unsigned z=x>>n;
	x=z|y;
	return x;
}

int main()
{
	unsigned x=8;
    int n=2;
	printf("%d",rightrot(x,n));
	return 0;
}
