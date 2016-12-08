#include<stdio.h>
int is_prime(int n);

int main()
{
        int m,n;
        scanf("%d %d",&m,&n);

        int i,a,j;
        int t=0;
        int s[10000];
        for(i=2;i<=10000;i++)
                if(is_prime(i)==0)
                        s[t++]=i;
        a=(n-m)/10;
        for(j=1;j<=a;j++)
        {
        for(t=m-1;t<=m+7;t++)
                printf("%d ",s[t]);
                printf("%d",s[m+8]);
                printf("\n");
                m=m+10;
        }
                        for(t=m-1;t<=n-2;t++)
                        printf("%d ",s[t]);
                        printf("%d",s[n-1]);
        return 0;
}
int is_prime(int n)
{
        int i;
        for (i=2;i<=n/2;i++)
           if(n%i==0)
                return -1;
            return 0;

}

