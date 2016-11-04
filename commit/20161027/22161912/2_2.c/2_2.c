#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    printf("n=(n>3):");
    scanf("%d",&n);
    m=(int)sqrt(n);
    for(i=2;i<=m;i++)
       if(n%i==0)
          break;
    if(i<=m)
       printf("%d is not prime number\n",n);
    else
       printf("%d is prime number\n",n);
    return 0;
}
