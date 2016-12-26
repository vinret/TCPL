#include<stdio.h>
int main()
{
	int m,n,max,min,i,j,a[4];
	scanf("%d",&m);
	do
	{
		max=0;
		min=0;
		for(i=0;i<4;i++)
		{
			a[i]=m%10;
			m=m/10;
		}
		for(i=1;i<4;i++)
			for(j=0;j<4-i;j++)
			{
				if(a[j]>a[j+1])
				{
					n=a[j];
					a[j]=a[j+1];
					a[j+1]=n;
				}
			}
		for(i=0;i<4;i++)
			min=min*10+a[i];
			for(j=3;j>=0;j--)
			max=max*10+a[j];
			m=max-min;
			printf("%d-%d=%d\n",max,min,m);
	}
	while(m!=6174&&m!=0);
	return 0;
}
