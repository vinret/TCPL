#include<stdio.h>
int main()
{
	int a[10],i,j,m;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<10;i++)
		for(j=1;j<9-i;j++)
			if(a[j]>a[j+1])
	        {
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
	        }
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
