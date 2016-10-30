#include<stdio.h>
int main()
{
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&a);
    a^=b;
    b^=a;
    a^=b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

