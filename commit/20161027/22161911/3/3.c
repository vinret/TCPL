#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d\n",&n);
    while(n!=1)
    {
        if((n&1)==1)
        {  n=(3*n+1)/2;
           i++;
        }
        else
        {  n=n/2;
           i++;
        }
   }
    printf("%d\n",i);
    return 0;
}

