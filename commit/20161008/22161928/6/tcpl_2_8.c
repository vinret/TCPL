#include<stdio.h>
int main()
{
    int x,n;
    int a,b;
    scanf("%d%d",&x,&n);
    a=~(~0<<n)&x;
    b=a<<(32-n);
    x=(x>>n)|b;
    printf("x=%d\n",x);

    return 0;
}
