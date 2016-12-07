#include <stdio.h>
int count1_in_bin(int n);
int count1_in_bin(int n)
{
    int s,a[10000],i=0,j;
    n=0;
    scanf("%d",&s);
    while(s!=0)
    {
        a[i]=(s%2);
        i=i+1;
        s=s/2;
    }
    for(j=(i-1);j>=0;j--)
    {
        if(a[j]==1)
            n=n+1;
    }
    return n;
}
int main()
{
    int n=0,k;
    k=count1_in_bin(n);
    printf("%d",k);
    return 0;
}
