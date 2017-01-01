#include<stdio.h>
#include<string.h>
int is_prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int a,j,i=0,x=0,y=0;
	int prime[100000]={0};
	scanf("%d%d",&x,&y);
	for(j=2;i<=y;j++)
	{
		if(is_prime(j))
			prime[i++]=j;
	}
	printf("%d",prime[x-1]);
	for(i=x;i<y;i++)
	{
		if((i-x+1)%10==0)printf("%d",prime[i]);
		else printf(" %d",prime[i]);
		if((i-x-8)%10==0)printf("\n");
	}
	return 0;
}

