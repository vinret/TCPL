#include<stdio.h>
int Fib(int n,int a,int b)
{
   if(n<=2)
      return b;
   return Fib(n-1,b,a+b);
}
int main()
{
   int n;
   printf("input the number which you want to know:");
   scanf("%d",&n);
   printf("Fib(%d)=%d\n",n,Fib(n,1,1));
   return 0;
}
