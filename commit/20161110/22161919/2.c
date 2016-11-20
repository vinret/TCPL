#include<stdio.h>
void triangle_judge(int a,int b,int c);

void triangle_judge(int a,int b,int c)
{
     if(a+b>c&&a+c>b&&b+c>a)
     {
        if(a==b==c) printf("等边三角形");
        else
            if(a==b||a==c||b==c) printf("等腰三角形");
            else printf("普通三角形");
     }
     else printf("输入数据错误");
}

int main()
{
    int a,b,c;

    printf("请输入三个数字:");
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
    printf("\n");

    return 0;
}
