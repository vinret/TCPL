#include<stdio.h>
int main()
{
    int n,i;
    printf("n=(n>3):");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
        if(n%i==0)
           break;
    if(i<n)
        printf("%d is not prime number\n",n);
    else
        printf("%d is prime number\n",n);
    return 0;
}
