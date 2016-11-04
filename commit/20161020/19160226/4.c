#include<stdio.h>
int main()
{
    int a,b,c,d,Sum;
    float Average;
    printf("Please input 4 numbers : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Sum=a+b+c+d;
    Average=Sum/4;
    printf("Sum=%d;    Average=%.1f",Sum,Average);
    return 0;
} 

