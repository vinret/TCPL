#include<stdio.h>
#include<string.h>
int main()
{
	char a[100001],n[2600001];
	int sum=0,i=0,j=0,temp;
	scanf("%[^\n]",a);
	temp=strlen(a);
	while(i<temp)
	{
		if((int)a[i]<'a')
			a[i]=a[i]+32;
		i++;
	}
	i=0;
	while(i<temp)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-96;
		else a[i]=0;
                sum=sum+a[i];
                i++;
	}
	for(j=0;sum>0;j++)
	{
		n[j]=sum%2;
		sum=sum/2;
	}
	int count1=0,count0=0;
	for (j=j-1;j>=0;j--)
	{
		if(n[j]==1) count1++;
		else if(n[j]==0)count0++;
	}
	printf("%d %d\n",count0,count1);
	return 0;
}
