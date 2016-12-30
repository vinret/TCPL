#include<stdio.h>
int count1_in_bin(int n);
int main()
{
		int n;
		printf("请输入一个数: ");
		scanf("%d",&n);

		int m=n;
		int count1;
		count1=count1_in_bin(n);
		printf("%d中有%d个1\n",m,count1);

		return 0;
}

int count1_in_bin(int n)
{
		int temp,count1=0;
		while(n!=0)
		{
				temp=(n&(~(~0<<1)));
				if(temp==1)  count1++;   //二进制数最右一位是否为１
				n=n>>1;   //切掉最有一位，判断左边一位是否为１
		}
		return count1;
}
