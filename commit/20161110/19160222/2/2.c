#include<stdio.h>
void triangle_judge(int a,int b,int c);

void triangle_judge(int a,int b,int c)
{
if(a+b<c||a+c<b||b+c<a) printf("wrong\n");
else if(a==b&&b==c) printf("equilateral triangle\n");
else if(a==b||a==c||b==c) printf("isosceles triangle\n");
else printf("triangle\n");
}

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}
