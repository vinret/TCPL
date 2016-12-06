#include<stdio.h>
int fib(int n)
{
	if(n==1||n==2)
	return 1;
	return  fib(n-1)+fib(n-2);
}

int main()
{
	printf("fib(5)=%d\n",fib(5));
	return 0;
}
