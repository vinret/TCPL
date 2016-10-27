#include<stdio.h>
int main()
{
    int x,a,b,c,y;
    scanf("%d",&x);
    a=x/100;
    b=(x-a*100)/10;
    c=x%10;
    y=c*100+b*10+a;
    printf("%d",y);
    return 0;
}
