#include<stdio.h>
int main()
{
    int num[100],n,m,i,j,a;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(j=0;j<m;j++)
    {
        a=num[n-1];
        for(i=n-1;i>0;i--)
            num[i]=num[i-1];
        num[0]=a;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
        if(i!=n-1)
           printf(" ");
        else
           printf("\n");
    }
    return 0;
}

