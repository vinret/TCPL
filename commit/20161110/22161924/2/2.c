#include<stdio.h>
void triangle_judge(int a,int b,int c);

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triangle_judge(a,b,c);
}
void triangle_judge(int a,int b,int c)
{
    if(a+b<=c||a+c<=b||b+c<=a)  
      printf("不能构成三角形\n");
    else 
    {
         if(a==b||a==c||b==c)
           printf("构成等腰三角形\n");
         if(a==b&&a==c&&b==c)
           printf("构成等边三角形\n");
    }
    if(a+b>c&&b+c>a&&a+c>b)  printf("构成普通三角形\n");
}

