#include<stdio.h>
void traingle_judge(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    traingle_judge(a,b,c);
    return 0;
}

void traingle_judge(int a,int b,int c)
{
    if(a+b<=c||a+c<=b||b+c<=a)
         printf("不能构成三角形\n");
    else
         if(a==b && a==c)
         printf("等边三角形\n");
         else
               if(a==b||a==c||b==c)
               printf("等腰三角形\n");
               else
                      printf("普通三角形\n");

}