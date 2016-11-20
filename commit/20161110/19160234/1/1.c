#include<stdio.h>

void triangle_judge(int a,int b,int c){
                if(a+b>c&&a+c>b&&b+c>a){
                                if(a==b||a==c||b==c){
                                                if(a==b&&b==c&&a==c)
                                                                printf("这个三角形是等边三角形\n");
                                                else
                                                                printf("这个三角形是等腰三角形\n");
                                }
                                else
                                                printf("这个三角形是普通三角形\n");
                }
                else
                                printf("这三个整数不能构成三角形\n");
}

int main()
{
                int a,b,c;
                scanf("%d%d%d",&a,&b,&c);
                triangle_judge(a,b,c);
                return 0;
}
