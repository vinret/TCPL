#include<stdio.h>
int is_pow2(int n);
int main()
{
	int n,flag;
	scanf("%d",&n);
	flag=is_pow2(n);
	printf("%d",flag);
	return 0;
}
is_pow2(int n)
{
	int b=1,flag;
	while(b<n)
		b=b*2;
	if(b==n)
		flag=0;
	else
		flag=-1;
	return flag;
}

