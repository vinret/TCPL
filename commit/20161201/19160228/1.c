#include <stdio.h>
int Fib(int n);
int main()
{
    int n=5;
    printf("Fib(5)=%d",Fib(n));
    return 0;
}
int Fib(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
