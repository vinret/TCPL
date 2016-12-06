#include<stdio.h>
int fac(int);

int main()
{
    int i,j,m,n;
    printf("请输入要显示的行数:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2*n;j>=2*i;j--)
        printf(" ");
        for(m=0;m<i;m++)
        {
            printf("%4d",fac(i-1)/fac(m)/fac(i-m-1));
        }
        printf("\n");
    }
}
int fac(int n)
{   
    if(n==0)
       return 1;
    else
       return n*fac(n-1);
}
