#include <stdio.h>
int main()
{
  int x,a,b,c;
  scanf("%d",&x);
  a=x/100;
  c=x%10;
  b=x-a*100-c;
  x=c*100+b+a;
  printf("%d\n",x);
  return 0;
}
