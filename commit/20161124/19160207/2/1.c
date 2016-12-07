//(a,b)*[a,b]=a*b
#include<stdio.h>
int GCD_resursive(int m,int n);  //求最大公约数
int LCM(int m,int n);   //求最小公倍数
int main()
{
		int m,n,lcm,GCD;
		printf("请输入两个整数: ");
		scanf("%d %d",&m,&n);
		lcm=LCM(m,n);
		printf("%d和%d的最小公倍数为:%d\n",m,n,lcm);
		return 0;
}

int GCD_resursive(int m,int n)
{
    int temp=m%n;
	if(temp!=0) 
			return GCD_resursive(n,temp);
	else
			return n;
}

int LCM(int m,int n)
{
		int x=m*n/GCD_resursive(m,n);
		return x;
}
