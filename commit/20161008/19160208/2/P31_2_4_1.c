#include<stdio.h>
int main()
{   
    int x;
    int y;
   
    printf("请输入x的值: ");
    scanf("%d",& x);
    y=x*x*x+2*x*x+3*x+1;
    printf("%d\n",y);
    return 0;
}
