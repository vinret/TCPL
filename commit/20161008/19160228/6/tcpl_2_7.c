#include <stdio.h>
int main()
{
	unsigned x,p,n;
	printf("x=");
	scanf("%d",&x);
	printf("p=");
	scanf("%d",&p);
	printf("n=");
	scanf("%d",&n);
	x=x^~(~0<<n)<<(p+1-n);
	printf("x=%d\n",x);
	return 0;
}
