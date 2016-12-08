//数组元素循环右移问题
#include<stdio.h>
int main()
{
   int M,N;
   int a[1000],b[1000];
   int i,j,k;
   printf("请输入N和M:");
   scanf("%d%d",&N,&M);
   printf("请输入N个数：");
   for(i=0;i<N;i++)
      scanf("%d",&a[i]);
    for(i=0;i<N;i++)
      b[i]=a[i];
 
  
      for(j=0;j<M;j++)
    a[j]=a[N-M+j];
      for(k=N-1;k>=M;k--)
    a[k]=b[k-M];

    for(i=0;i<N;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}

