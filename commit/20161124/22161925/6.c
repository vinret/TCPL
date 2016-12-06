#include<stdio.h>
int count_in_bin(int n)
{
    int count=0;
    for(;n>0;)
    {
    	if(1==n%10) count++;
    	n/=10;
	}
	return count;	
}
int main()
{
	int n;
	printf("Please input a binary number:");
	scanf("%d",&n);
	printf("The number include %d '1'.\n",count_in_bin(n));
	return 0;
}
