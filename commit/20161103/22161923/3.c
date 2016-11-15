#include<stdio.h>
long long D(long long sum,int n);
int main()
{
    long long a,b,sum;
    int n;
    printf("please input :");
    scanf("%lld,%lld,%d",&a,&b,&n);
    sum=a+b;
    D(sum,n);
    printf("\n");
    return 0;
}

long long D(long long sum,int n)
{    
    if(sum>n-1)
    D(sum/n,n);
    printf("%lld",sum%n);

    return 0;
}


    



    
    
