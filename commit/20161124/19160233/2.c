#include<stdio.h>
int LCM(int m,int n)
{
	int o;
	while(o!=0)
	{
		o=m%n;
		m=n;
		n=o;
	}
	return m;
}
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a*b/LCM(a,b);
		printf("%d",c);
	}
	else
	{
		c=a*b/LCM(b,a);
		printf("%d",c);
	}
	return 0;
}

