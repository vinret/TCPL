#include<stdio.h>
int count1_in_bin(int n)
{
	int count=0;
	while(n)
	{
		if(n&1)
			count++;
		n=n>>1;
	}
	return count;
}
int main()
{
	int m,n;
	scanf("%d",&n);
    m=count1_in_bin(n);
	printf("%d\n",m);
	return 0;
}
