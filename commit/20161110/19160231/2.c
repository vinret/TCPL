#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
int a,b,c;
scanf("%d%d%d\n",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}

void triangle_judge(int a,int b,int c)
{

if(a+b<=c||a+c<=b||b+c<=a)
printf("it cannot make a triangle\n");
 if(a==b&&b==c)
printf("regular triangle\n");
else if(a==b||a==c||b==c)
printf("isocele triangle\n");
else printf("ordinary triangle\n");
}
