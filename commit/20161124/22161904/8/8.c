#include<stdio.h>
#define max 100000000
int is_prime(long long n)
{
    int i;
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
           break;
    }
    if(i>n) return 0;
    else return -1;
}
int main()
{
    int count=0,M,N;
    long long i;
    scanf("%d %d",&M,&N);
    for(i=2;i<max;i++)
    {
       if(is_prime(i)==0)
       {
          count++;
          if(count>=M&&count<=N)
          {
            printf("%lld",i);
            if((count-M)%10==9&&count!=N)
              printf("\n");
            else
            if(count!=N)
            printf(" ");
          }
       }
       if(count==N) break;
    }
    return 0;
}
 
