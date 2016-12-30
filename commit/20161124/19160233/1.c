#include<stdio.h>
int GCD_rescursive(int m,int n)
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
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)printf("%d",GCD_rescursive(a,b));
	else printf("%d",GCD_rescursive(b,a));
	return 0;
}
