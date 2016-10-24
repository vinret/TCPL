#include<stdio.h>
int main()
{
   int a,b,c,x,y;
   scanf("%d",&x);
   a=x/100;
   c=x%10*100;
   b=x-a*100-x%10;
   y=a+b+c;
   printf("%d",y);
   return 0;
}

   
