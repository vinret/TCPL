#include<stdio.h>
unsigned rightrot(unsigned x,int n);

int main()
{
	unsigned x;
	int n;
	scanf("%d,%d",&x,&n);
	printf("%d",rightrot(x,n));
	return 0;
}

unsigned rightrot(unsigned x,int n)
{
	return ((~(~0<<n)&x)<<(32-n))|(x>>n);
}
