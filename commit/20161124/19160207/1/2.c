#include<stdio.h>                                                                                                                         
int GCD_resursive(int m,int n);
int main()
{
		int m,n,a,b,GCD;

		printf("请输入两个整数: ");
		scanf("%d %d",&m,&n);
		a=m;
		b=n;
		GCD=GCD_resursive(m,n);
		printf("%d和%d的最大公约数为:%d\n",a,b,GCD);

		return 0;
}

int GCD_resursive(int m,int n)
{
		int temp=m%n;
		if(temp!=0)  return GCD_resursive(n,temp);
		else  
				return n;
}
