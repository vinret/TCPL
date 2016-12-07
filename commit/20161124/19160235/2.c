#include<stdio.h>
int LCM(int m,int n);
int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
		printf("最小公倍数是：%d",LCM(m,n));
}
int LCM(int m,int n)
{
	int r1,r2,a,b;
	a=m;
	b=n;
	while(1)
	{
          	r1=m%n;
		if(r1==0)
			break;
		else
		m=n;
		n=r1;
	}
	r2=a*b/n;
	return r2;
}

