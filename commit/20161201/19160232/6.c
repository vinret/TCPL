#include<stdio.h>
int main()
{
	int i,j,N,m;
	printf("输入数据个数N:");
	scanf("%d",&N);
	int a[N];
	printf("输入数据:");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=1;i<N;i++)
	{
		for(j=0;j<=N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%5d",a[i]);
	}
}
