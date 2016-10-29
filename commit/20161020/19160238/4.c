#include<stdio.h>
int main()
{
  int a,b,c,d,Sum;
  double x;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  Sum=a+b+c+d;
  x=(1.0/4)*Sum;
  printf("Sum=%d,Average=%.1f\n",Sum,x);
  return 0;
}
