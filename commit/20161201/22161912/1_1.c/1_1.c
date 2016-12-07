#include<stdio.h>
int Fib(int n)
{
    if(1==n||2==n)
       return 1;
    return Fib(n-1)+Fib(n-2);
}
int main()
{
    printf("Fib(5)=%d\n",Fib(5));
    return 0;
}
