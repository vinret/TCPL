#include<stdio.h>
int is_prime(int n);

int is_prime(int n)
{
    if(n==1) return -1;
    if(n==2) return 0;

    int i;
    for(i=2;i<=n-1;i++)
        if(n%i==0) break;
    if(i<n)
        return -1;
    else
        return 0;
}

int main()
{
    int i,p,n;
    
    for(p=0,n=1;p<1000;n++)
    {        
        i= is_prime(n);
        if(0==i)
        { 
           p++;
           if(p>=100) printf("%d  ",n);
        }
    }

    printf("\n");
    return 0;
}

