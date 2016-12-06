#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[10]={2,3,4,5,1,7,6,8,9,0};
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

