#include<stdio.h>
int count1_in_bin(int n);
int main()
{
	int n,flag;
	scanf("%d",&n);
	flag=count1_in_bin(n);
	printf("%d",flag);
	return 0;
}
int count1_in_bin(int n)
{
	int i=0,flag=0;
	int a[100];
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(i=0;i<100;i++)
	{
		if(a[i]==1)
			flag=flag+1;
	}
	return flag;
}
