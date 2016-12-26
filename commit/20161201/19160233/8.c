#include<stdio.h>
int main()
{
	char a[1000],temp;
	int i,j,n=0;
	while((a[n++]=getchar())!='\n');
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
	for(i=0;i<n-1;i++)printf("%c",a[i]);
	return 0;
}
