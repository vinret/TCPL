#include<stdio.h>
#include<stdlib.h>
int is_pow2(int n)
{
     int x=0;
     while(n>1){
     n++;
}
     return x;
}
int main(void)
{
    int num;
    printf("请输入一个整数:");
    scanf("%d",&num);
    if(num&(num-1))
    printf("%d不是2的幂次方\n",num);
    else    printf("%d是2的幂次方\n",num,is_pow2(num));
    system("pause");
    return 0;
}
