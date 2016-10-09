#include<stdio.h>
int main()
{
  unsigned short x,a,b;
  int n;

  printf("x=");
  scanf("%o",&x);
  printf("n=");
  scanf("%d",&n);

  a=x>>n;
  b=x<<(16-n);
  x=a|b;
  printf("%o\n",x);
  return 0;
}

