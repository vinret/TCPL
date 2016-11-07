#include <stdio.h>
#include <math.h>
int main()
{
  float c,d,e,f;
  double pi=4.0*atan(1.0);
  scanf("%f %f %f %f",&c,&d,&e,&f);
  float a,b,n;
  n=(d+f);
  a=c*e*(cos(n));
  b=c*e*(sin(n));
  if(b<0)
  b=-1*(sqrt(b*b));
  printf("%.2f+%.2fi",a,b);
  return 0;
}
