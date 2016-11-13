#include <stdio.h>
void triangle_judge(int a,int b,int c)
{if(a+b>c&&a+c>b&&b+c>a)
   if(a==b&&a==c) printf("This triangle is an equilateral triangle.");
   else  if(a==b||a==c||b==c) printf("This triangle is an isosceles triangle.");         else printf("This triangle is an ordinary triangle.");
 else printf("input data error");}
int main()
{ int a,b,c;
  printf("Please input a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  triangle_judge(a,b,c);
  printf("\n");
  return 0;
}
