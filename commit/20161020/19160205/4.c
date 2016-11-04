#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d,Sum;
  float  Average;
  printf("please input 4 numbers");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  Sum=a+b+c+d;
  Average=Sum*1.0/4;
  printf("Sum=%d,Average%.1f\n",Sum,Average);
  return 0;
}
