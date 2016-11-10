#include <stdio.h>
int main()
{
	int n,i=0;
    scanf("%d",&n);
    while(n!=1)
	{
		n%2?(n=(3*n+1)/2):(n=n/2);
		i=i+1;
	}
	printf("%d\n",i);
	return 0;
}
