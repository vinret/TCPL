#include<stdio.h>
int main()
{
  int x, a,b,c;
  scanf("%d",&x);
   a=x/100;
   b=(x-a*100)/10;
   c=x%10;
   x=c*100+b*10+a;
    printf("%d\n",x);
    return 0;
}

