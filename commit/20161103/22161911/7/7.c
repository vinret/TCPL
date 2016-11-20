#include<stdio.h>
#include<math.h>
int is_prime(int n)
{   
    if(n<=1) return -1;
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0) return -1;
    return 0; 
}    
int main()
{
    int n,i=0;
    for(n=2;i<=1000;n++)
    {
        if(is_prime(n)==0) {
        i++;
        if(i>=100&&i<=1000)
            printf("%d:%d ",i,n);
        }
    }
    printf("\n");
    return 0;
}
