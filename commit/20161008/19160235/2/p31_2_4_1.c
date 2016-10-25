#include <stdio.h>
int main()
{
 int x,y;
 printf("请输入x的值：");
 scanf("%d", & x);
 y=((x+2)*x+3)*x+1;
 printf("%d\n",y);
 return 0;
}
