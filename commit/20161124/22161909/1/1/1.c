#include <stdio.h>
int max(int m,int n);
int min(int m,int n);
int GCD_recursive(int m,int n);
int main()
{
	int m,n,result;
	scanf("%d %d",&m,&n);
	result=GCD_recursive(m,n);
	printf("%d\n",result);
	return 0;
}

int max(int m,int n)
{
	if(m>>n) return m;
	else return n;
}

int min(int m,int n)
{
	if(m<<n) return m;
	else return n;
}

int GCD_recursive(int m,int n)
{
	int yu;
	do
	{
		yu=(max(m,n))%(min(m,n));
		n=min(m,n);
		m=yu;
	}while(yu!=0);
	return n;
}
	



