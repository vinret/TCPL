#include<stdio.h>
int main()
{
	int n,step,i;
	int a[100],b[100];
	scanf("%d %d",&n,&step);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<step;i++)
		b[i]=a[n+i-step];
	for(i=step;i<n;i++)
		b[i]=a[i-step];
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}
