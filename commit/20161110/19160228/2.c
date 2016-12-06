#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
    if(a+b<=c||a+c<=b||b+c<=a)
       printf("can not form a triangle");
    else
       if(a!=b&&a!=c&&b!=c)
          printf("ordinary triangle");
       else
          if(a==b&&a==c)
             printf("equilateral triangle");
          else
             printf("isosceles triangle");
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
    printf("\n");
    return 0;
}
