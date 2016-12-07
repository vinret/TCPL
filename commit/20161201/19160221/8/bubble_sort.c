#include <stdio.h>
int main()
{
  int n;
  printf("输入排序总数n:");
  scanf("%d",&n);
  int a[n],i,j;
  printf("输入%d个整数:",n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
    { for(j=i+1;j<n;j++)
        { if(a[i]>a[j]) 
            { a[i]=a[i]^a[j];a[j]=a[i]^a[j];a[i]=a[i]^a[j];}
        }
    }
  for(i=0;i<n;i++) printf("%d ",a[i]);
}
