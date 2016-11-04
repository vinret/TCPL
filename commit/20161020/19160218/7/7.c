#include<stdio.h>
int main()
{ int x,a,b,c,d;
  scanf("%d",&x);
  a=x/100;
  c=x%10;
  b=(x/10)%10;
  d=100*c+10*b+a;
  printf("%d\n",d);
  return 0;



}
