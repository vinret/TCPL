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
if(a+b<=c||a+c<=b||b+c<=a)
printf("Can't form a triangle\n");
else if(a==b&&b==c)
printf("Equilateral triangle\n");
else if(a==b||b==c||a==c)
printf("Isosceles triangle\n");
else printf("Normal triangle\n");
}
