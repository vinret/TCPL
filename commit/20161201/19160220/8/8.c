#include <stdio.h>
void sort(int a[],int n)
{int i,j,temp;
 for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
     if(a[j]>a[j+1])
     {temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;}
}
int main()
{int a[100],n;
 printf("Please input a number n:");
 scanf("%d",&n);
 printf("Please input n number:");
 int i;
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("Before ordering:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n");
 sort(a,n);
 printf("After ordering:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n");
 return 0;
}
