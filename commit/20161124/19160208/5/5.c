#include <stdio.h>
int is_pow2(int n)
{
	if((n&n-1)==0) 
		return 0;
	else return -1;
}
int main()
{
	int m,n;
	scanf("%d",&n);
    m=is_pow2(n);
	printf("%d\n",m);
	return 0;
}
