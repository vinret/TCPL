#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int m;
    for(m=2;m<=sqrt(n);m++)
    {
       if(n%m==0)   return -1;
    }
    return 0;
}
int main()
{
    int n,i=1,a[1000];
    for(n=2;i<=1000;n++)
    {
       if(is_prime(n)==0)
       {
         n=a[i];
         i++;
       }
    }
    for(i=100;i<=1000;i++)
    {
       printf("%d\n",a[i]);   
    }
    printf("\n");
    return 0;
}
