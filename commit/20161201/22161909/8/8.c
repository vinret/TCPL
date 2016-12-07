#include <stdio.h>
#define SIZE 8
int main()
{
	int a[SIZE],i,j;
	printf("Please input %d numbers:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE-1;++i)
		for(j=0;j<SIZE-1-i;++j)
			if(a[j]>a[j+1])
			{
				a[j]  =a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]  =a[j]^a[j+1];
			}
	printf("After bubble sort:\n");
	for(i=0;i<SIZE;++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

