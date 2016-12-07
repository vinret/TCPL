#include<stdio.h>
int main()
{
	int a[100];
	int m,n,i;
    scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int t=a[m-1];
		int b;
    for(b=m-1;b>0;b--)
		a[b]=a[b-1];
		a[0]=t;
	}
	for(i=0;i<m;i++)
	printf("%d\t",a[i]);
	printf("\n");
	return 0;
}

