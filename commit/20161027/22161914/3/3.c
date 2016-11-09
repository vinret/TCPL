#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int i=0;
    while(a!=1)
{
    if(a%2==0)
{
    a=a/2;
}
    else
{
    a=(3*a+1)/2;
}
    i++;
}
    printf("%d\n",i);
    return 0;
}

