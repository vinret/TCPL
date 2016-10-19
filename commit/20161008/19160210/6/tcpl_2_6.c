#include<stdio.h>
int main()
{
  unsigned x=15,y=8,z;
int p=3,n=2;
z=~0;
z=z<<n;
z=~z;
z=z<<(p-n+1);
z=~z;
x=x&z;          //将x中的第p位开始的n项清零

z=~0;
z=z<<n;
z=~z;
y=y&z;
y=y<<(p-n+1);     //将y中前n项移动到指定位置

z=x|y;

printf("%d\n",z);
return 0;
}
