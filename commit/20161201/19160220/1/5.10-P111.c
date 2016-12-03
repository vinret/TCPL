#include <stdio.h>
int Fib(int n)
{if(n==1||n==2)
   return 1;
 else 
   return Fib(n-1)+Fib(n-2);}
int main()
{int n;
 printf("Please input a number:");
 scanf("%d",&n);
 printf("Fib(%d)=%d\n",n,Fib(n));
 return 0;}
