#include<stdio.h>
#include<string.h>
int main()
{
    long int A,B,C;
    int D,i=0,a[32];
    scanf("%ld%ld%d",&A,&B,&D);
    C=A+B;
    if(0==C)
       printf("0");
    while(C)
    {
       a[i]=C%D;
       i++;
       C/=D;
    }
    for(i--;i>=0;i--)
       printf("%d",a[i]);
    printf("\n");
    return 0;
}
