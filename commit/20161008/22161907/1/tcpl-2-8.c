#include<stdio.h>
int main()
{
  unsigned int x,n;
  unsigned int a,b,c;

  printf("x =");
  scanf("%u", &x);
  printf("n =");
  scanf("%u", &n);

  b=x<<(32-n);
  c=x>>n;
  a=b|c;
  printf("%u\n", a);
  return o;
}
