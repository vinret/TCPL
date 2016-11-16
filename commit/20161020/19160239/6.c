#include<stdio.h>
int main()
{
   int x;
   int a,b;
   scanf("%d",&x);
   a=x/16;
   b=x-a*16;
   x=a*10+b;
   printf("%d",x);
   return 0;
}
