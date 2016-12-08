#include <stdio.h>
int Fib(int n,int a,int b)
{if(n<=2)
   return b;
 else
   return Fib(n-1,b,a+b);}
int main()
{int n;
 printf("Please input a number:");
 scanf("%d",&n);
 printf("Fib(%d)=%d\n",n,Fib(n,1,1));
 return 0;}
