#include<stdio.h>
int main()
{
    int a,b,c,d;
    float sum,ave;
    printf("请输入四个整数（中间以空格隔开）:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
     
    sum=a+b+c+d;
    ave=sum/4.0;
    printf("%.1f\n",sum);
    printf("%.1f\n",ave);
    return 0;
}
