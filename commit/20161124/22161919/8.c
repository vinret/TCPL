#include<stdio.h>
#include<math.h>
int prime_select(int n);
int prime_judge(int n);
 
int prime_judge(int n)
{
    int i,s;
    s=(int)sqrt(n);
    for(i=2;i<=s;i++)
        if(n%i==0)
           return 0;
    return 1;
}

int prime_select(int n)
{
    int count=0,i=1;
    while(count!=n)
    {
       i++;
       if(prime_judge(i))
          count++;
    }
    return i;
}

int main()
{
    int M,N,i,count=1;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        printf("%d",prime_select(i));
        if(count<10&&i!=N)
           printf(" ");
        else
        {
           printf("\n");
           count=0;
        }
        count++;
     }
     return 0;
}

