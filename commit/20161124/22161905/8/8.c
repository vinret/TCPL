#include<stdio.h>
int is_prime(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
        if(n%i==0) break;
        if(i<n) return 0;
        else return i;
}
int main()
{
    int n,i,j,k=1;
    int N,M,s[10000];
  
    for(j=0;j<=10000;j++)
    {
        s[j]=0;
    }

    j=1;
    scanf("%d %d",&M,&N);

    for(n=2;k<M;n++)
    {
        i= is_prime(n);
        if(i) k++;
    }
   
    for(n=n;k<=N;n++)
    {
        i=is_prime(n);
        if(i)
        {
            s[j]=n;  
            j++;
            k++;
        }
    }
    for(j=1;j<=10000;j++)
    {
        if(j%10==0)
        {
            printf("%d\n",s[j]);
            j++;
        }
        if(j==N-M+1)
        {
            printf("%d\n",s[j]);
            break;
        }
    printf("%d ",s[j]);
    }
    return 0;
}
