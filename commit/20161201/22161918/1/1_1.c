#include<stdio.h>
int fid(int n);
int main()
{
  printf("Fib(5)=%d\n",fib(5));
  return 0;
}
int fib(int n)
{
  if(n==1||n==2)  return 1;
  return fib(n-1)+fib(n-2);
}
