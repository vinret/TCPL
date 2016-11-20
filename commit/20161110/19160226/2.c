#include<stdio.h>
void triangle_judge(int a,int b,int c);

void triangle_judge(int a,int b,int c)
{
     if((a<=0)||(b<=0||c<=0||(a+b)<=c||(a+c<=b)||(b+c)<=a))
     printf("Wring");
     else if (a==b||b==c||a==c)
     printf("Isosceles triangle");
     else if(a==b&&b==c)
     printf("Equilateral triangle");
     else
     printf("General triangle");
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triangle_judge(a,b,c);
    printf("\n");
    return 0;
}
