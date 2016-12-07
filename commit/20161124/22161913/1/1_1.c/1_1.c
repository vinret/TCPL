#include<stdio.h>
int GCD_recursive(int m, int n)
{
    int t;
    while(n!=0)
    {
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",GCD_recursive(a,b));
    return 0;
}

