#include<stdio.h>
int main()
{
      int x,y,a,b,c;
      scanf("%d",&x);
      a=x/100;
      b=(x-100)/10;
      c=x%10;
      y=100*c+10*b+a;
      printf("%d\n",y);
      return 0;
}
