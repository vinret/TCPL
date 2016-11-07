#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Please input n(n>3): ");
    scanf("%d",&n);
    j=(int)sqrt(n);
    for (i=2;i<=j;i++)
        if(n%i==0)
          break;
    if(i<=j)
        printf("%d is not a prime number\n",n);
    else
        printf("%d is a prime number\n",n );
    return 0;
}
