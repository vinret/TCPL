#include<stdio.h>
int count1_in_bin(int n)
{
    int m=0;
    while(n!=0)
    {
         n=n&(n-1);
         m++;
     }
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}

