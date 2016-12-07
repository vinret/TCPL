#include<stdio.h>
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
}
void output(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
       printf("%-4d",a[i]);
    printf("\n");
}
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
       for(j=0;j<n-1-i;j++)
          if(a[j]>a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
          }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    input(a,n);
    printf("before sorting:\n");
    output(a,n);
    sort(a,n);
    printf("after sorting:\n");
    output(a,n);
    return 0;
}
