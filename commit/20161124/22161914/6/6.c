#include<stdio.h>
int count_in_bin(int n)
{
    int count=0;
    for(;n;n>>=1)
    if(n&1)++count;
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("其中1的个数为:%d\n",count_in_bin(n));
    return 0;
}
