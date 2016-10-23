#include <stdio.h>
int main()
{
  float  a,b,c,d,e,g;
  scanf("%f %f %f %f",&a,&b,&c,&d);
  e=a+b+c+d;
  g=e/4;
  printf("Sum=%.0f,Average=%.1f\n",e,g);

  return 0;
}
