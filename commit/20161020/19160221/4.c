#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  int S=a+b+c+d;
  float A=S*1.0/4;
  printf("Sum=%d;Average=%.1f\n",S,A);
  return 0;
}
