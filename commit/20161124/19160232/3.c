#include<stdio.h>
int GCD(int a,int b)
{
	int j;
	j=a%b;
	if(j==0)
	return b;
	if(j!=0)
	{
		a=b;
		b=j;
		GCD(a,b);
	}
}


int main()
{
	int a,b,p=1,m,n,i;
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	i=GCD(a,b);
	if(i==1)
	printf("a,b最小公倍数为%d\n",m*n);
	else
	{
		a=m;
		b=n;
		while(i!=1)
		{
			a=a/i,b=b/i;
			p*=i;
			i=GCD(a,b);
		}
		p=p*a*b;
		printf("a，b最小公倍数为%d\n",p);
	}
 } 
