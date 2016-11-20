#include<stdio.h>
int is_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}return -1;
}
int main()
{
	int n,j,m,k=0;
	printf("请输入任意正整数n:");
	scanf("%d",&n);
	is_prime(n);
	j=is_prime(n);
	printf("%d\n",j);
	for(n=2;;n++)
	{
		is_prime(n);
		j=is_prime(n);
		if(j==-1)
		{
			k++;
			if(k>=100&&k<=1000)	  	
			printf("%d ",n);
			
		}	
		if(k==1000)
		return 0;
	}
	printf("\n");
}
