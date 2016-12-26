#include<stdio.h>
void printd(int n);

int main()
{
	printd(1234);
	printf("\n");

	return 0;
}
void printd(int n)
{
	if(n==0) return;
	printd(n/10);
	printf("%d,",n%10);
}
