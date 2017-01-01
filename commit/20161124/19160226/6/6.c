#include<stdio.h>
int _count1_in_bin(int n)
{
    int count=0;
    while(n!=0)
    {
    if (n%2==1)
    count++;
    n=n/2;
    }
    return count;
}

int main()
{
    int n,sum;
    printf("Please input a number:");
    scanf("%d",&n);
    sum=_count1_in_bin(n);
    printf("%d\n",sum);
    return 0;
}
    
