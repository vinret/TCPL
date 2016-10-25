#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    float x,y;
    x=a+b+c+d;
    y=x/4;
    printf("Sum=%d;Average=%.1f",a+b+c+d,y);
    return 0;
}
