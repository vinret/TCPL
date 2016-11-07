#include<stdio.h>

int main()
{
    int n,r,i;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
{
    r=n%i;
    if(r==0)break;
}
    if(i>=n)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}

