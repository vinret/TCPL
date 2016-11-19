#include<stdio.h>
void triangle_judge(int a, int b,int c);
int main()
{
  int a,b,c;
  printf("input a b c:");
  scanf("%d%d%d",&a,&b,&c);
  triangle_judge(a,b,c);
  return 0;
}
void triangle_judge(int a,int b,int c)
{
   if(a+b>c&&a+c>b&&b+c>a)
   {
     if(a==b&&b==c)
     printf("三角形为等边三角形");
     else if(a==b||a==c||b==c)
     printf("三角形为等腰三角形");
     else printf("三角形为普通三角形");
   }
  else
  printf("input data error\n");
  return 0;
}
