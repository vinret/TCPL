#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   triangle_judge(a,b,c);
   return 0;
}

void triangle_judge(int a,int b,int c)
{
   if(a+b>c&&a+c>b&&b+c>a)//是否能够构成三角形
   {  if(a*a+b*b>c*c) printf("可构成锐角三角形\n");
        else if(a*a+b*b==c*c) printf("可构成直角三角形\n");
          else printf("可构成钝角三角形\n");
      if(a==b||b==c||a==c)
        printf("可构成等腰三角形\n");
      if(a==b&&b==c)  printf("可构成等边三角形\n");
        else printf("不能构成三角形\n");
   }
}