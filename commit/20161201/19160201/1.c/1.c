#include<stdio.h>
int Fib(int n)
{
 if(n==1||n==2)
  return 1;
 else
  return Fib(n-1)+Fib(n-2);
}
int main()
{
 int n;
 printf("please input n:");
 scanf("%d",&n);
 printf("result:%d\n",Fib(n));
 return 0;
}
