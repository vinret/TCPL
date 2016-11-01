#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Please input n(n>3):");
    scanf("%d",&n);
    j=sqtr(n);
    for(i=2;i<=j;i++)
    { if(n%i==0)
        j=1;
    }
    if(i<=j)
       printf("%d isn't the prime.\n",n);
    else
       printf("%d is the prime.\n",n);
    return 0;
}
