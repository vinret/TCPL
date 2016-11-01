#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    float average;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    average=sum/4.0;
    printf("%d/n",sum);
    printf("%f/n",average);
    return 0;
}
