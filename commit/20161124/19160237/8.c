#include<stdio.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		return -1;
	else
		return 0;
}
int main()
{
	int M,N,i=1,j=1,count=0;
	scanf("%d %d",&M,&N);
	int prime[10000]={0};
	do
	{
		i++;
		if(is_prime(i))
		{
			prime[j]=i;
			j++;
			count++;
		}
	}while(count<N);
	for(i=M,count=1;i<=N;i++,count++)
	{
		printf("%d",prime[i]);
		if(count%10==0)
		printf("\n");
		else if(count!=N-M+1)
			printf(" ");
	}
	return 0;
}



	

