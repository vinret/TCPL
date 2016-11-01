#include<stdio.h>
int showbit(int n)
{
        if(n>1){
        showbit(n/2);
}
        printf("%d",n%2);
}
int main()
{
        int a;
        printf("输入的整数:\n");
        scanf("%d",&a);
        printf("输出的二进制:");
        showbit(a);
        printf("\n");
        printf("输出的八进制:%o\n",a);
        printf("输出的十六进制:%x\n",a);

return 0;
}

