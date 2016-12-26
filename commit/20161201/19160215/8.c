#include<stdio.h>
void sort(int a[ ],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;++i)
   for(j=0;j<n-1-i;++j)
     if(a[j]>a[j+1])
     {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
}

int main()
{
 int n,k,a[1000];
 puts("Please define the number:");
 scanf("%d",&n);
 printf("Please enter %d figures:\n",n);
 for(k=0;k<n;++k)
  scanf("%d",&a[k]);
 sort(a,n);
 for(k=0;k<n;++k)
  printf("%d  ",a[k]);
 
 printf("\n"); 
 return 0;
}

