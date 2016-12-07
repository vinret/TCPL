#include<stdio.h>
int is_pow2(int n)
{
	n=n/2;
	if(1==n)
	{
		printf("0\n");
		return 0;
	}
	else if(n%2==0) is_pow2(n);
		 else 
		 {
		 	printf("-1\n");
		 	return 0;
		 }
}

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	printf("0\n");
	else
	{
	if(n%2!=0)
	{
		printf("-1\n");
		return 0;
	}
	else
	{
		is_pow2(n);
	}
	}
 }
