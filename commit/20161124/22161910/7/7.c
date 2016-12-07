#include<stdio.h>
int n,m,i,a[100],count=0;
int main()
{
    scanf("%d%d",&n,&m);
    m=n-m%n;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++)
    {
      printf("%d",a[i]);
      count++;
      if(count !=n)
      {
         printf(" ");
       }
  }
   for(i=0;i<m;i++)
   {
     printf("%d",a[i]);
     count++;
   if(count!=0)
   printf(" ");
   }
   printf("\n");
   return 0;
}

