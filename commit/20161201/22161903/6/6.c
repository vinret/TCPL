#include<stdio.h>
#define R 3
#define C 4
int main()
{
   int mA[R][C],mB[C][R];
   int i,j;
   printf("请输入原矩阵A中的元素,");
   printf("%d*%d:\n",R,C);
   for(i=0;i<R;i++)
      for(j=0;j<C;j++) scanf("%d",&mA[i][j]);
   for(i=0;i<R;i++)
     for(j=0;j<C;j++) mB[j][i]=mA[i][j];
   printf("转置矩阵B,");
    printf("%d*%d:\n",C,R);
   for(i=0;i<C;i++){
     for(j=0;j<R;j++)printf("%8d",mB[i][j]);
     printf("\n");
   }
   return 0;
}

