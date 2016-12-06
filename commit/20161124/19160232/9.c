#include<stdio.h>
int main()

{
	int N,M,i,n;
	scanf("%d%d",&N,&M);
	int arr[200];
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<=N-1;i++)
	{
		n=i+M;
		while(n>=N)
		{
			n=n-N;
		}
		arr[n+100]=arr[i];
	}	
	for(i=0;i<=N-1;i++)
	{
	printf("%d ",arr[i+100]);
	}

}
