#include<stdio.h>
#include<math.h>
int main()
{
   int x,a,b,c;
   scanf("%d,%d,%d,%d",&x,&a,&b,&c);
   printf("%d\n",sqrt(fabs(x))!=4*a/(b*c));
   return 0;
}
