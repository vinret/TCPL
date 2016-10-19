#include <stdio.h>
int main()
{
	unsigned short x;
	short int n;
	printf("x=");
	scanf("%d",&x);
    printf("n=");
	scanf("%d",&n);
	x=(x<<(16-n)^(x>>n));
	printf("x=%d\n",x);
	return 0;
}
