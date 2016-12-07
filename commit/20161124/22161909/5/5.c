#include <stdio.h>
int is_pow2(int n)
{
	int count=0;
	for(;n;n>>=1)
		if(n&1)  ++count;
	if(1==count) return 0;
	else         return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(is_pow2(n))
		printf("This number isn't the power to the power of 2.\n");
	else 
		printf("This number is the power to the power of 2.\n");
	return 0;
}
