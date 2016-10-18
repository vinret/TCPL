#include <stdio.h>
int main()
{
  unsigned short x,a,b,c;
  short int n;
  printf("Please input x:");
  scanf("%hd",&x);
  printf("Please input n:");
  scanf("%hd",&n);

  a=x<<(16-n);
  b=x>>n;
  c=a|b;
  printf("%d\n",c);
  return 0;
}
