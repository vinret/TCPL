#include<stdio.h>
int is_pow2(int n)
{  
    if ((n&(n-1)))
    return 0;
    else
    return 1;
}

int main()
{
    int n,flag;
    printf("Please input a number:");
    scanf("%d",&n);
    flag=is_pow2(n);
    if (flag==1)
       printf("%d is a power of 2\n",n);
    else
       printf("%d is not a power of 2\n",n);
    return 0;
}    
