#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   b=a%10*100+a/10%10*10+a/100;
   printf("%d\n",b);
   return 0;
}
