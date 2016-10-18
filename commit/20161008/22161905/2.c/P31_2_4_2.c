#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x;
    printf("请依次输入a,b,c,x的值");
    scanf("%d%d%d%d",&a,&b,&c,&x);
    printf("%d\n",sqrt(abs(x))!=4*a/b*c);
    return 0;
}
