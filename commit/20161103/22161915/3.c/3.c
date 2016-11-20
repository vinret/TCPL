#include <stdio.h>
void fun(int n,int d)
{
    int r;
    if(n>0)
{
   fun(n/d,d);
   r=n%d;
   printf("%d",r);
}
}
   int main()
{
   int a,b,d;
   scanf("%d%d%d",&a,&b,&d);
   int sum=a+b;
   fun(sum,d);
   return 0;
}
