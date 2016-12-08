/*Fib(0)=1,Fib(1)=1,  Fib(n)=Fib(n-1)+Fib(n-2)  (n>=3)*/
#include<stdio.h>
int Fib(int n);
int main()
{
		printf("Fib(5)=%d\n",Fib(5));
		return 0;
}

int Fib(int n)
{
		if(n==1||n==2)
				return 1;
		else
				return Fib(n-1)+Fib(n-2);
}
