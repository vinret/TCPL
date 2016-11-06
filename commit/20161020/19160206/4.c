#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d,Sum;
  float  Average;
  printf("please write four numbers");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  Sum=a+b+c+d;
  Average=Sum*1.0/4;
  printf("%d,%.1f\n",Sum,Average);
  return 0;
}
