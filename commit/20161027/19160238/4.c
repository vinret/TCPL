#include<stdio.h>
#include<math.h>
int main()
{
        int n,m,i,j;
        char x;
        scanf("%d%*c%c",&n,&x);
        m=sqrt((n+1)/2);

        for(i=m-1;i>-m;i--)
        {       for(j=1;j<=2*m-1;j++)
                {
                        if(j<m-abs(i)||j>m+abs(i))
                                printf(" ");
                        else
                                printf("%c",x);
                }
        printf("\n");
        }

        printf("%d",n-m*m*2+1);

        return 0;
}
