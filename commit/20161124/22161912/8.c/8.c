#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int m,i;
    if(n<=1)
       return -1;
    m=(int)sqrt(n);
    for(i=2;i<=m;i++)
    {
       if(0==n%i)
          return -1;
    }
    return 0;
}
int main()
{
    int M,N,PN,m,i=0,a[10000];
    scanf("%d%d",&M,&N);
    for(PN=2;i<=N;PN++)
       if(0==is_prime(PN))
       {
          i++;
          a[i]=PN;
       }
    m=M;
    for(i=0;M<=N;M++)
    {
       printf("%d",a[M]);
       i++;
       if(i<N-m+1)
       {
          if(i%10)
             printf(" ");
          else
             printf("\n");
       }
       else
          printf("\n");
    }
    return 0;
}

