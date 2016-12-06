#include<stdio.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}return -1;
}
int main()
{
	int j,n,k=0,M,N;
	scanf("%d%d",&M,&N);
	for(n=2;;n++)
	{
		is_prime(n);
		j=is_prime(n);
		if(j==-1)
		{
			k++;
			if(k>=M&&k<=N)	  	
			printf("%d ",n);
			
		}	
		if(k==1000)
		return 0;
	}
}
