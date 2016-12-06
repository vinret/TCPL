#include<stdio.h>
int blackhole(int arr[],int n);
int main()
{
	int n,arr[4],i=1,m;
	printf("input a number:");
	scanf("%d",&n);
	m=n;
	while(i<=4)
	{
		arr[i-1]=n%10;
		n=n/10;
		i++;
	}
	if(arr[0]==arr[1]&&arr[0]==arr[2]&&arr[0]==arr[3])
	printf("%d-%d=0000\n",m,m);
	else
	blackhole(arr,m);
	
}

int blackhole(int arr[],int n)
{
	int i=1,j,h,p1,p2,p3;
	p1=p2=p3=0;
	while(i<=4)
	{
		arr[i-1]=n%10;
		n=n/10;
		i++;
	}
	for(i=1;i<=3;i++)
	{
		for(j=0;j<=3-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				h=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=h;
			}
		}
	}
	for(i=3;i>=0;i--)
	p1=p1*10+arr[i];
	for(i=0;i<4;i++)
	p2=p2*10+arr[i];
	p3=p1-p2;
	printf("%d-%d=%d\n",p1,p2,p3);
	if(p3!=6174)
	blackhole(arr,p3);
}
