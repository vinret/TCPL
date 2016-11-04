#include<stdio.h>
int main()
{
    int m,n;
    printf("Please input n(n>0&&n<10000):");
    scanf("%d",&n);

    for(m=0;n!=1;m++)
    {
       if((n%2)==0)
        n=n/2;
       else
        n=(3*n+1)/2;
       }
  
    printf("%d\n",m);
    printf("\n");
    return 0;
}
