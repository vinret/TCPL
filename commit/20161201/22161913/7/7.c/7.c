#include<stdio.h>
int main()
{
    int n1[2][3],n2[3][4],n3[2][4];
    int i,j,k;
    int temp;
    printf("请输入n1中的元素: \n");
    for(i=0;i<2;i++)
      for(j=0;j<3;j++)
        scanf("%d",&n1[i][j]);
    printf("请输入n2中的元素: \n");
    for(i=0;i<3;i++)
     for(j=0;j<4;j++)
     scanf("%d",&n2[i][j]);
    for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      {
         n3[i][j]=0;
         for(k=0;k<3;k++)
          n3[i][j]+=n1[i][k]*n2[k][j];
      }
    printf("相乘结果为: \n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<4;j++)
          printf("%d ",n3[i][j]);
          printf("\n");
    }
    return 0;
}


