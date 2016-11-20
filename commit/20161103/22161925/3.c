#include<stdio.h>
long long d(long long sum,long int D)
{
     if(sum>D-1)
     d(sum/D,D);
     printf("%lld",sum%D);
}
int main()
{
    long int A,B,D,sum;
    scanf("%ld%ld%ld",&A,&B,&D);
    sum= A+B;
    d(sum,D);
    
    return 0;
}
     
