#include<stdio.h>
int is_prime(int n);
int main()
{
    int a=1,i=0,b;
    while (i<=1000)
    {
        a++;
        b=is_prime(a);
        if (b && i>=100)
        printf("%d ",a);
        if (b) i++;
    }
    printf("\n");
    return 0;
}
int is_prime(int a)
{
    int i;
    if (a==2 || a==3)
        return -1;
    else
        for(i=2;i<=a/2;i++)
    if (a%i==0)
        return 0;
    return -1;
}

