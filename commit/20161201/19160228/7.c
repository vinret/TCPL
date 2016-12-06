#include <stdio.h>
int main()
{
    int a[2][3],b[3][2],c[2][2],i,j,m,n;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);
    for(m=0;m<2;m++)
        for(n=0;n<2;n++)
        c[m][n]=a[m][0]*b[0][n]+a[m][1]*b[1][n]+a[m][2]*b[2][n];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
        return 0;
}
