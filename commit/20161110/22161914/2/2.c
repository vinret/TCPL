#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
     if(a+b<=c||b+c<=a||c+a<=b)
     printf("不能构成一个三角形\n");
     else if(a==b||b==c||c==a)
{
     if(a==b&&b==c)
     printf("等边三角形\n");
     else printf("等腰三角形\n");
}
     else printf("普通三角形\n");
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
    printf("\n");
    return 0;
}
