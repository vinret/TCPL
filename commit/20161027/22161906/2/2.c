#include<stdio.h>
int main()
{
    int n,i;
    printf("Please input n(n>3):");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
       if(n%1==0)
          break;
    if(i<n)
        printf("%d is not a prime number.\n",n);
    else
        printf("%d is a prime number.\n",n);
    return 0;
}
