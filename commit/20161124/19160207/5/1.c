#include<stdio.h>
int is_pow2(int n);
int main()
{
		int n;
		printf("请输入一个数；");
		scanf("%d",&n);
		int m=n;
		if(is_pow2(n))
				printf("%d不是２的幂次方.\n",m);
		else 
				printf("%d是２的幂次方.\n",m);

		return 0;
}

int is_pow2(int n)
{
		int flag=0;
		int temp;
		while(n>1)
		{
			temp=(n&(~(~0<<1)));
			if(temp!=0)
			{
					flag=-1;
					break;
			}
			n=n>>1;
		}
		return flag;
}
