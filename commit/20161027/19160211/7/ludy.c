#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;  
   scanf("%d %d %d",&a,&b,&c);
   int d;
   d=(pow(a,b))/c;
   printf("%e\n",d);
   return 0;
}
