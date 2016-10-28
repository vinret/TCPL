#include <stdio.h>
int main()
{
  unsigned short int x,a,b;
  scanf("%hu",&x);
  a=x>>4;
  b=x<<12;
  b=b>>12;
  printf("%d\n",10*a+b);
  return 0;
}
