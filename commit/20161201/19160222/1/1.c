#include<stdio.h>
int Fib(int n,int a,int b);

int Fib(int n,int a,int b)
{
if(n<=2) return b;
return Fib(n-1,b,a+b);
}

int main()
{
int N;
scanf("%d",&N);
printf("Fib(5)=%d\n",Fib(N,1,1));
return 0;
}
