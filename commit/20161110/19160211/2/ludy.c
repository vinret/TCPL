#include <stdio.h>
#include <stdlib.h>
void triangle_judge(int a,int b,int c);
int main()
{ int a,b,c; 
  printf("输入三角形三边a,b,c\n");
  scanf("%d %d %d",&a,&b,&c);
  triangle_judge(a,b,c);
  return 0;
}
void triangle_judge(int a,int b,int c)
{
  if(a+b<=c||b+c<=a||a+c<=b)
   {
     printf("不能构成三角形\n");
     exit(0);
     };
   if(a==b||b==c)
     {
     if(a==b&&b==c)
     printf("等边三角形\n");
     else
     printf("等腰三角形\n");
     }
    else if(a+b>c&&a+c>b&&b+c>a)
     printf("普通三角形\n");
   
 }  
     
