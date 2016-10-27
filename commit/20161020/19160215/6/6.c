#include<stdio.h>
int main()
{
    int a;
    printf("Please input the wrong number:\n");
    scanf("%d",&a);
    printf("%d\n",a%16+a/16*10);
    return 0;
}

