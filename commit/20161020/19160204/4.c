#include<stdio.h>
int main()
{
 int a,b,c,d,Sum;
 float Average;
 scanf("%d %d %d %d",&a,&b,&c,&d);

 Sum=a+b+c+d;
 Average=Sum/4.0;

 printf("Sum=%d,Average=%.1f\n",Sum,Average);
 return 0;
}
