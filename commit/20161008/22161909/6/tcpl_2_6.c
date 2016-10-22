#include <stdio.h>
int main()
{
	unsigned int x,y,p,n;
        unsigned int a,b,c,d;
	printf("The function is setbits(x,p,n,y)\n");
	
	printf("x=  ");
	scanf("%u",&x);
	
	printf("p=  ");
	scanf("%u",&p);
	
	printf("n=  ");
	scanf("%u",&n);
	
	printf("y=  ");
        scanf("%u\n",&y);
        
	a=(~(~0<<n))&y;
	b=a<<(p-1);
	c=~((~(~0<<n))<<(p-1))&x;
        d=b|c;	
	printf("The return number is %u\n",d);
	return 0;
}
