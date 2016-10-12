#include<stdio.h>
int main()
{
  unsigned short x;
  int p,
      n;

  printf("x=");
  scanf("%o",&x);
  printf("p=");
  scanf("%d",&p);
  printf("n=");
  scanf("%d",&n);

  x=x^(~(~0<<n)<<(p+1-n));
  printf("%o\n",x);
 return 0;
}

