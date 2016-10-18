#include<stdio.h>
int main()
{
   int y, x=1;
   y=((x+2)*x+3)*x+1;
   printf("%d\n",y);
   x=3;
   printf("%d\n",y);
   return 0;
}
