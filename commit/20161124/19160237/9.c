#include<stdio.h>
#include<math.h>
void sort(int* a,int n)
{
	for(int i=3;i>=0;i--)
	{
		a[i]=n%10;
		n=n/10;
	}
	int i,j,temp;
	for(i=0;i<3;i++)
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
}

int max(int* a)
{
	int i,sum=0;
	for(i=0;i<4;i++)
		sum=sum+pow(10,i)*a[i];
	return sum;
}

int min(int* a)
{
	int i,sum=0;
	for(i=0;i<4;i++)
		sum=sum+pow(10,i)*a[3-i];
	return sum;
}

int main()
{
	int N;
	int a[4]={0};
	int* p=a;
	scanf("%d",&N);
	sort(p,N);
	if(max(p)-min(p)==0)
		printf("0000 - 0000 =0000\n");
	else
	{	while(max(p)-min(p)!=6174)
		{	printf("%04d - %04d = %04d\n",max(p),min(p),max(p)-min(p));
			sort(p,max(p)-min(p));
		}
	}
	printf("%04d - %04d = %04d\n",max(p),min(p),max(p)-min(p));
       return 0;
}


