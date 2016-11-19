#include<stdio.h>
void triangle_judge(int a,int b,int c);

 void triangle_judge(int a,int b,int c)
{
   if(a+b<=c||a+c<=b||b+c<=a) printf("It's not a triangle.\n");
   else if(a==b||a==c||b==c) printf("It's an isosceles triangle.\n");
   else if(a==b && b==c) printf("It's an euqilateral triangle.\n");
   else printf("It's a triangle.\n");
}

   int main()
{
   int a,b,c;
   printf("Please input a,b,c:");
   scanf("%d%d%d",&a,&b,&c);
   triangle_judge(a,b,c);
   return 0;
}

