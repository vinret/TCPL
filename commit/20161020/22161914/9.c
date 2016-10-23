#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
