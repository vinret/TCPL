#include<stdio.h>
int main()
{
   double a,d;
   int b;
   char c;
   scanf("%lf%d%c%lf",&a,&b,&c,&d);
   printf("%c,%d,%.2lf,%.2lf\n",c,b,a,d);
   return 0;
}
