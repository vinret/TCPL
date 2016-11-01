#include<stdio.h>
#include<math.h>
int main()
{
        int n,m,i,j;
        char c;
        scanf("%d %c",&m,&c);
        n=floor(sqrt((m+1)/2));
        for (i=n;i>=1;--i)
        {
                for (j=1;j<=n-i;++j)
                   printf(" ");
                for (j=1;j<=2*i-1;++j)
                   printf("%c",c);
                printf("\n");
        }
        for (i=2;i<=n;++i)
        {
                for (j=1;j<=n-i;++j)
                   printf(" ");
                for (j=1;j<=2*i-1;++j)
                   printf("%c",c);
                printf("\n");
        }
        printf("%d\n",m+1-n*n*2);
        return 0;
}
