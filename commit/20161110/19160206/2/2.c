#include<stdio.h>
void triangle_judge(int a,int b,int c);
void triangle_judge(int a,int b,int c)
{
 if (a+b>c&&a+c>b&&b+c>a)
{
 if (a==b||b==c||a==c)
{
 if (a==b&&b==c)
  printf("equilateral triangle\n");
 else
  printf("isosceles triangle\n");
}
 else
  printf("normal triangle\n");
}
 else
  printf("not a triangle\n");
}
int main()
{
   int n,a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   triangle_judge(a,b,c);
return 0;
}
