#include <stdio.h>
int main()
{
    int a[3][4],b[4][3],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
    for(j=0;j<4;j++)
        for(i=0;i<3;i++)
        b[j][i]=a[i][j];
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",b[i][j]);
    printf("\n");
    }
    return 0;
}
