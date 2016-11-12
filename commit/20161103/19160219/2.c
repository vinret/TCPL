#include<stdio.h>
int main()
{
   int n,i;
   int a[31],b[31],c[31];
   scanf("%d",&n);
   if (n>=1&&n<=10)
   {
      for (i=1;i<=n;i++)
         scanf("%d%d%d",&a[i],&b[i],&c[i]);
      for (i=1;i<=n;i++)
      {
         if (a[i]+b[i]>c[i])
            printf("Case #%d: true",i);
         else
            printf("Case #%d: false",i);
         printf("\n");
      }
   }
   return 0;
}
