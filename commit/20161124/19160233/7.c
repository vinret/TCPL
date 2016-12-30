#include<stdio.h>
int main()
{
	int n[100],N,M,i,j;
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++)
		scanf("%d",&n[i]);
	for(i=N-M;i<N;i++)
		printf("%d ",n[i]);
	for(i=0;i<N-M;i++)
		printf("%d ",n[i]);
	return 0;
}

