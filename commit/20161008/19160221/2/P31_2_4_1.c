#include <stdio.h>
int main()
{
   int x,y;
   printf("Please input x\n");
   scanf("%d",&x);
   y=x*(x*x+2*x+3)+1;
   printf("x*(x*x+2x+3)+1=%d\n",y);
   return 0;
}
