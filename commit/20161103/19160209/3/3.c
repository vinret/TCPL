#include<stdio.h>
int main()
{
	int a,b,sum,n;
	int i=0,D[33];
	scanf("%d %d %d",&a,&b,&n);
        sum=a+b;
	if(sum==0) printf("0\n");
        else
	{
		while(sum>0)
		{
			D[i]=sum%n;
			sum=sum/n;
			i++;
		}
		i=i-1;
		while(i>=0)
		{
			printf("%d",D[i]);
			i--;
		}
	}
	return 0;
}
