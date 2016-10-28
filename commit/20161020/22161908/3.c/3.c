#include<stdio.h>
int main()
{
    int F,C;
    scanf("%d%d",&F,&C);
    C=5*(F-32)/9;
    printf("Celsius=%d\n",C);
    return 0;
}
