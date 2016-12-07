#include<stdio.h>
int GCD_interative(int m,int n);
int main()
{
		int m,n,GCD;
		int a,b;
 
		printf("请输入两个数: ");
		scanf("%d %d",&m,&n);
		a=m;
		b=n;
		GCD=GCD_interative(m,n);
		printf("%d和%d的最大公约数为:%d\n",a,b,GCD);
		return 0;
}

int GCD_interative(int m,int n)
{
		int temp,t;
		if(m<n)
		{
				t=n;
				n=m;
				m=t;
		}
		temp=m%n;
		while(0!=temp)
		{
				m=n;
				n=temp;
				temp=m%n;
		}
		return n;
}
