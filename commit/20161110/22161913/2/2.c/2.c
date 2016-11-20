#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    triangle_judge(i,j,k);
}
void triangle_judge(int a,int b,int c)
{
     if(a+b<=c||a+c<=b||b+c<=a)
         printf("这个数无法组成三角形");
     else
     {
        if(a==b&&b==c)  printf("等边三角形");
        else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a)
               printf("等腰三角形");
        else printf("普通三角形");
     }
}

