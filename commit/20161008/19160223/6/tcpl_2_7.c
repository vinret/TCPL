#include<stdio.h>
int main()
{
	unsigned int x,y;
	int p,n;
	printf("x=");
	scanf("%d",&x);
	printf("p=");
	scanf("%d",&p);
	printf("n=");
	scanf("%d",&n);
    y=x^(~(~0<<n)<<(p-n+1));
	printf("%d\n",y);
	return 0;
}

