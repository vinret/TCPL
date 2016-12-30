#include<stdio.h>
void sort(int a[ ],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;++i)
  for(j=0;j<n-1-i;j++)
   if (a[j]>a [j+1])
   {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
   }
}
void Print(int *num,int n)
{
 int i,j;

 for(i=0;i<n,i++;)
  printf("%d",num[i]);
 puts("\n");
 return;
}
int main()
{
 int num[8]={1,3,2,5,4};
 sort(num,5);
 return 0;
}
