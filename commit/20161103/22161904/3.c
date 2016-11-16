#include<stdio.h>
int main()
{
    long A,B,n;
    int D;
    n=A+B;
    scanf("%ld%ld%d",&A,&B,&D);
    while(n%D!=0)
    {
          n=n/D;
          printf("%d",n%D);
    }
    if(n==0) printf("0");
    printf("\n");
    return 0;
}

