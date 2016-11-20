#include<stdio.h>
void triangle_judge(int a, int b, int c);

int main()
{
    int a=2,b=2,c=2;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c||b+c<=a||a+c<=b)
      printf("不是三角形");
    else if(a==b&&b==c)  printf("三角形是等边三角形");
       else if(a==b||b==c||c==a)  printf("三角形是等腰三角形");
           else  printf("三角形是普通三角形");
    return 0;
}
