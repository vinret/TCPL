#include<stdio.h>
int main()
{
    int C,F;
    printf("请输入华氏度:");
    scanf("%d",&F);
    C=5*(F-32)/9;
    printf("Celsius=%d\n",C);
    return 0;
}

