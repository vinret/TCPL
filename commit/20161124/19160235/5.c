#include<stdio.h>
int is_pow2(int n)
{
	int t,a,b;
	if(n==1)
		return 0;
	else if(n%2==1)
		return -1;
	else if(n%2==0)
	{
		while(a%2!=1)
		{
			t=n/2;
			n=t;
			a=n;
			b=a;
		}
		if(b==1)
			return 0;
		else
			return -1;
	}

}
int main()
{
	int n;
	printf("请输入n:");
	scanf("%d",&n);
	printf("%d",is_pow2(n));
	return 0;
}

