#include<stdio.h>
#include<math.h>

int main()

{
  int a,b,c,d,Sum;
  float Average;




  scanf("%d%d%d%d",&a,&b,&c,&d);
  Sum=a+b+c+d;

  Average=Sum*1.0/4;

  printf("Sum=%d,Average=%.1f",Sum,Average);


  return 0;
}
