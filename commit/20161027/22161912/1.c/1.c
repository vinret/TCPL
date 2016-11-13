#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
       for(j=1;j<=i;j++)
       {
          k=i*j;
          printf("%3d*%d=%d",j,i,k);
       }
       printf("\n");
    }
    return 0;
}
