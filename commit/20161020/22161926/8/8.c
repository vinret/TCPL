#include<stdio.h>
int main()
{
    int n;
    int i=0,a[32];
    scanf("%d",&n);
    printf("The binary= ");
    while(n>=1)
    {
          a[i]=n%2;
          i=i+1;
          n=n/2;
    }
    for(i=i-1;i>0;i--)
          printf("%d\n",a[i]);
    printf("\n");
    printf("The octonary= %o\n",n);
    printf("The hexadecimal= %x\n",n);
    return 0;
          
}
