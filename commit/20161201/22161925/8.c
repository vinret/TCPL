#include<stdio.h>
int main()
{
    int n,i,j,x;
    int a[100];
    printf("请输入个数：");
    scanf("%d",&n);
    printf("请输入数字：");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
          if(a[j]>a[j+1])
          {
             x=a[j];
             a[j]=a[j+1];
             a[j+1]=x;
          }
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
    printf("\n");

    return 0;
}
