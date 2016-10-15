#include<stdio.h>
int main()
{
    int x,n;
    int a,b;
    scanf("%d%d",&x,&n);
    a=~(~0<<n)&x;       //n bits remained,and the rest becomes 0.
    b=a<<(32-n);        //the fist n bits become the rightmost n bits of x.
    x=(x>>n)|b;
    printf("x=%d\n",x);

    return 0;
}     
