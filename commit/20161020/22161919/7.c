#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    printf("%d",b+c*10+d*100);

    return 0;
} 
