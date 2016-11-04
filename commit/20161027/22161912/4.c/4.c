#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,k;
    char c;
    scanf("%d %c",&n,&c);
    m=(n+1)/2;
    m=(int)sqrt(m);
    for(i=m;i>=1;i--)
    {
       for(j=1;j<=m-i;j++)
          printf(" ");
       for(k=1;k<=2*i-1;k++)
          printf("%c",c);
       printf("\n");
    }
    for(i=2;i<=m;i++)
    {
       for(j=1;j<=m-i;j++)
          printf(" ");
       for(k=1;k<=2*i-1;k++)
          printf("%c",c);
       printf("\n");
    }
    printf("%d\n",n-2*m*m+1);
    return 0;
}

