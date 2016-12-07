#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("Fib(%d)=%d\n",n,Fib(n));
return 0;
}
int Fib(int n)
{
if(1==n||2==n) return 1;
return Fib(n-1)+Fib(n-2);
}

