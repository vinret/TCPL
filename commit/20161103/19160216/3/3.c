#include<stdio.h>
long long D(long long sum, int n);
int main()
{
    long long A,B,sum;
    int n;
    scanf("%lld%lld%d",&A,&B,&n);
    sum=A+B;
    D(sum,n);
    printf("\n");
    return 0;
}

long long D(long long sum,int n)
{
    if(sum>n-1)
    D(sum/n,n);
    printf("%lld",sum%n);

}
