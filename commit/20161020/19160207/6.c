#include<stdio.h>
int main(void)
{
   int a,b,c,d;

   scanf("%d",&a);
   b=a>>4;
   c=a&(~(~0<<4));
   d=10*b+c;
   printf("%d\n",d);
   
   return 0;
}
