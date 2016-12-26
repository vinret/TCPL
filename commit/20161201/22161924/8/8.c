#include <stdio.h>
void input(int a[],int n);
void output(int a[],int n);
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
void input(int a[],int n)
{
     int i;
     for(i=0;i<n;i++) scanf("%d",&a[i]);
}
void output(int a[],int n)
{
     int i;
     for(i=0;i<n;i++) printf("%d ",a[i]);
     printf("\n");
}
int main()
{
    int n;
    printf("请输入排序总数：");
    scanf("%d",&n);
    int num[n];
    input(num,n);
    sort(num,n);
    output(num,n);
    return 0;
}
    
