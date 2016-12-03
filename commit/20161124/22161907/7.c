#include<stdio.h>
int main()
{   int n,m,i,k;
 
 scanf("%d", &n);
scanf("%d\n", &m);
printf("\n");
 int a[n];   
  for (i=0;i<=n-1;i++)
     scanf("%d", &a[i]);
     
   for(i=0;i<=m-1;i++)
   {  k=a[i];
      a[i]=a[m+i];
      a[m+i]=k;
    }
 printf("\n");
  for (i=0;i<=n-1;i++)
 printf("%d", a[i]);  
 return 0;
}
