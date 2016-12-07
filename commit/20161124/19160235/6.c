#include<stdio.h>
#include<stdlib.h>
int count1_in_bin(int n);

int main()
{
	int n,b;
	printf("please input n:");
	scanf("%d",&n);
	b=count1_in_bin(n);
	printf("%d",b);
	return 0;
}

int count1_in_bin(int n)
{
    int  i,b=0;
	while(n!=0)
	{
		while(n%2==1)
		{
			 b++;
			 i=n/2;
			 n=i;
	
		}
		while(n%2==0)
		{
			i=n/2;
			n=i;
			break;
		}

	}
	return b;
	 
}

