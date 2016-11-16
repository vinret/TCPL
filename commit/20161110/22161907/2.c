#include<stdio.h> 
int main()
{
   int a,b,c;
   scanf("%d,%d,%d\n", &a,&b,&c);
   triangle_judge(a,b,c);
}
  void strangle_judge(int a, int b, int c)
{  if (a+b<c || b+c<a || a+c<b)
    printf("can't constitute a triangle.");
   else if (a==b || b==c || a==c)
         if (a==b && b==c)
         printf("it is a equilateral triangle.");
         else  printf("it is a isosceles triangle.");
       else  printf("it is a ordinary triangle.");
}


