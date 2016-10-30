#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a;
    a=x/16*10+(x-x/16*16);
    printf("%d",a);
    return 0;
}
