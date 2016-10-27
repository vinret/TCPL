#include <stdio.h>
int main()
{
   int a,b,c,d,sum;
   float Average;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   sum=a+b+c+d;
   Average=sum*1.0/4;
   printf("Sum=%d,Average=%.1f\n",sum,Average);
   return 0;
}
