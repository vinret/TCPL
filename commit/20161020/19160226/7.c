#include<stdio.h>
int main()
{
    int x,y,a,b,c;
    scanf("%d",&x);
    while(x>=0&&x<1000)
    {
    a=x/100;
    b=(x-a*100)/10;
    c=x%10;
    y=c*100+b*10+a*1;
    break;
    }
    printf("%d",y);
    return 0;
}
