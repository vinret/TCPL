#include<stdio.h>
unsigned rightrot(unsigned x,int n);
int wordlength(void);

main()
{
	unsigned x;
	int n;
	x=111;
	n=3;
	rightrot(x,n);
}

unsigned rightrot(unsigned x,int n)
{
	int wordlength(void);
	int w1;
	w1=wordlength();
	printf("w1:%d",w1);
	x=(x&~(~0<<n%w1))<<(w1-n%w1);
	return x;
}

int wordlength(void)
{
	int i;
	unsigned v=(unsigned)~0;
	for(i=1;(v=v>>1)>0;i++);
	return i;
}
