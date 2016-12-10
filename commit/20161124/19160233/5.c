#include<stdio.h>
int is_pow2(int n)
{
	for(n=n;n%2==0;n/=2);
	if(n==1)return 0;
	else return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",is_pow2(n));
	return 0;
}

