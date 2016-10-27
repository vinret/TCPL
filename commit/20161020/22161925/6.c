#include<stdio.h>
int main()
{
    int a,b;
    printf("Please input a number:\n");
    scanf("%d",&a);
    b=a/16*10+a-a/16*16;
    printf("%d\n",b);
    
    return 0;
}

