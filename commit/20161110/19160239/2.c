#include <stdio.h>
void triangle_judge(int a,int b,int c)
{
  a=0,b=0,c=0;
  while((a+b<=c||a+c<=b||b+c<=a)||a<1||b<1||c<1)
{
  printf("请输入三角形边长a b c:");
  scanf("%d %d %d",&a,&b,&c);
}
  printf("该三角形为");
   if(a==b&&b==c) printf("等边三角形");
  else
  {
     if(a==b||b==c||a==c) printf("等腰三角形");
    else printf("普通三角形");
  }
}
  int main()
{
  int a,b,c;
  triangle_judge(a,b,c);
  printf("\n");
  return 0;
}   
