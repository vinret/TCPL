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
       if(n%i==0)
          return -1;
    }
    return 0;
}
int main()
{
    int n,i;
    for(n=2,i=0;i<1000;n++)
    {
       if(0==is_prime(n))
       {
          i++;
          if(i>=100)
             printf("%-5d",n);
       }
    }
    printf("\n");
    return 0;
}
