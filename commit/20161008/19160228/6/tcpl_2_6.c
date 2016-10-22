#include <stdio.h>
int main()
{
    unsigned short x,y;
	short int n,p;
	printf("x=");
	scanf("%d",&x);
    printf("n=");
	scanf("%d",&n);
    printf("p=");
	scanf("%d",&p);
    printf("y=");
	scanf("%d",&y);
    x=x&~(~(~0<<n)<<(p+1-n));
	y=(y&~(~0<<n))<<(p+1-n);
	x=x|y;
	printf("x=%d\n",x);
	return 0;
}
