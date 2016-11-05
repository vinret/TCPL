#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,p;
	printf("Please input n(n>3):  ");
	scanf("%d",&n);

	if(n%2==0)
		p=n/2;
	else
		p=(n+1)/2;


        for(i=2;i<=p;i++)
		if(n%i==0)
			break;

	if(i==p+1)
		printf("The n is a prime number.\n");
	else
		printf("The n is not a prime number.\n");

	return 0;

}
