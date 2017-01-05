#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,j;
    j=(int)sqrt(n);
    for(i=2;i<=j;i++)
    if(n%i==0)
       break;
    if (i<=j)
       return -1;
    else
       return 0;
}

int main()
{
    int n,i,M,N,k=0;
    int count=0;
    scanf("%d %d",&M,&N);
    for (n=2;count<N;n++)
    {
        i=is_prime(n);
        if(i==0)
        {
          count++;
          if(count>=M&&count<=N-1)
          {
          if(++k%10==0)
          printf("%d\n",n);
          else printf("%d ",n); 
          }
 
          if(count==N)
          printf("%d",n);
        }
    } 
    printf("\n");
    return 0;
}
