#include<stdio.h>
int main()
{

    int i=0,n,a[32];
    printf("please input a decimal number:");
    scanf("%d",&n);
    printf("octonary=%o\n",n);
    printf("hexadecimal=%x\n",n);
    printf("binary=");
    while(n>0)
    {
         a[i]=n%2;
         i=i+1;
         n=n/2;
    }
    for(i--;i>=0;i--)
    printf("%d",a[i]);
    printf("\n");
    return 0;
}

