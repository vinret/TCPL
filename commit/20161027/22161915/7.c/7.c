#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c,d;
   scanf("%d%d%d",&a,&b,&c);
   b=pow(a,b);
   d=b%c;
   printf("%d",d);
   return 0;
}
   
