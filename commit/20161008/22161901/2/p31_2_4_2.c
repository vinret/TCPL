#include<stdio.h>
int main()
{ 
    int x,a,b,c;
    printf("请依次输入x,a,b,c的值");
    scanf("%d%d%d%d",&x,&a,&b,&c);
    printf("%d\n",sqrt(abs(x))!=(4*a)/(b*c));
    return 0;
}
