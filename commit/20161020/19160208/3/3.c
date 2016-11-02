#include<stdio.h>
int main()
{
    int c,f;
    printf("请输入华氏温度值:");
    scanf("%d",& f);

    c=5*(f-32)/9; 
    printf("%d\n",c); 
    return 0; 
}

