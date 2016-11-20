#include<stdio.h>
int is_prime(int n);
int main()
{
	int i,m;
	for(i=0,m=0;m<1000;i++)
	{
		if(is_prime(i)==0)
			m=m+1;
		if(m>=100&&is_prime(i)==0)
			printf("%d\n",i);
	}
return 0;
}
	
int is_prime(int n)
{
	int m;

	for(m=2;m<=n;m++)
	{
		if(n%m==0)
			break;
	}
	if(n<=1||m<n)
		return -1;
        else
		return 0;
}
