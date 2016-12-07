#include <stdio.h>
int count1_in_bin(int n);
int main()
{
	int n,result;
	scanf("%d",&n);
	result=count1_in_bin(n);
	printf("%d\n",result);
	return 0;
}

int count1_in_bin(int n)
{
	int i,j;
	for(i=0;n!=0;)
	{
		j=n%2;
		if(j==1) i++;
		n/=2;
	}
	return i;
}


