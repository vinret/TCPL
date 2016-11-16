#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
     if(a+b<=c||a+c<=b||b+c<=a)
	printf("Can't constitute a triangle\n");
     else if(a==b||a==c||b==c)
	  {
            if(a==b&&a==c) printf("Equilateral  triangle\n");
            else  printf("Isosceles  triangle\n");
          }
     else 
	printf("Ordinary triangle\n");
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
}
