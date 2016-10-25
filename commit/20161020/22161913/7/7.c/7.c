#include<stdio.h>
int main()
{
    int a,b,c;
    int x,y;
    scanf("%d",&x);
    a=x/100;
    b=(x-a*100)/10;
    c=x-a*100-b*10;
    y=c*100+b*10+a;
    printf("%d\n",y);
    return 0;
}

