#include<stdio.h>
int main()
{
	int m,n,i,j,temp;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
	temp=a[n-1];
	for(j=n-1;j>=0;j--)
	a[j]=a[j-1];
	a[0]=temp;
	}
	for(j=0;j<n;j++)
		printf("%d",a[j]);
	return 0;
}
