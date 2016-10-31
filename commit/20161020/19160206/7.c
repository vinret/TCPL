#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    int a=i%10;
    int b=i/10%10;
    int c=i/100;
    printf("%d",c+b*10+a*100);
    return 0;
}
