#include<stdio.h>
#include<math.h>
int main()
{
  printf("输入在一行中给出一个【0,153】范围内的正整数，保证能转换回有效的BCD数，也就是说这个整数转换成十六进制时不会出现A-F的数字\n");
  int e,b,c,d,i,a[8];
  b=c=d=0;
  scanf("%d",&e);
  for (i=1;i<=8;i=i+1) 
{ a[i]=e%2; e=e/2;}
  for (i=8;i>=5;i=i-1) b=b+pow(2,i-5)*a[i];
for (i=4;i>=1;i=i-1) c=c+pow(2,i-1)*a[i];
d=10*b+c;
 printf("%d\n",d);
return 0;
}
