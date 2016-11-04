#include<stdio.h>
#include<math.h>
int main()
{   
    int a,b,c;
    printf("请输入错误的BCD：");
    scanf("%d",&a);
    b=a/16;
    c=a%16;
    printf("%d\n",b*10+c);
    return 0;
}
