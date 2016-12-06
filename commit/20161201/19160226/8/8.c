#include<stdio.h>
int main()
{
   int i,j,n,temp;
   int a[100];
   printf("Please input n: ");
   scanf("%d",&n); 
   printf("Please input  numbers: ");
   for(i=0;i<n;i++)
      scanf("%d" ,&a[i]);

   printf("\nBefore: ");
   for(i=0;i<n;i++)
      printf("%d  ",a[i]);
   printf("\n");

   for(i=0;i<n-1;i++)
      for(j=0;j<n-1-i;j++)
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
   printf("After : ");
   for(i=0;i<n;i++)
      printf("%d  ",a[i]);
   printf("\n");

   return 0;
}
