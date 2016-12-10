#include<stdio.h>
int count1_in_bin(int n)
{
	int count=0;
	for(n=n;n!=0;n/=2)
		if(n%2==1)count++;
	return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",count1_in_bin(n));
	return 0;
}

