#include<stdio.h>
void BubbleSort(int a[],int size);
int main()
{
  int i,n;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  BubbleSort(a,n);
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
  return 0;
}
void BubbleSort(int a[],int size)
{
  int i,j,temp;
  for(i=0;i<size;i++)
  {  for(j=size-1;j>i;j--)
     {  if(a[j]<a[j-1])
        {  temp=a[j];
           a[j]=a[j-1];
           a[j-1]=temp;
        }
     }
  }
}
  
