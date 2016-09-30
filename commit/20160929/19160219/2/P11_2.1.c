#include <stdio.h>
#define PI 3.14
int main()
{
  int radius=5;
  double size,circumference;
  size=PI*radius*radius;
  circumference=2*PI*radius;
  printf("size=%f\n",size);
  printf("circumference=%d\n",circumference);
  return 0;
}
