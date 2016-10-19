#include<stdio.h>
int main()
{
    int x,y;
    printf("Please input x\n");
    scanf("%d",&x);
    y=x*(x*(x+2)+3)+1;
    printf("y=%d\n",y);
    return 0;
}

