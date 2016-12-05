#include<stdio.h>
int main()
{
int m,n,i=0,j,a=4;
scanf("%d%d",&m,&n);
if (m==1 && n==2)
 { printf("2 3");return 0;}
if (m==1)
 printf("2 3 ");
if (m==2)
 printf("3 ");
i+=2;
while (i<=n-1)
   {a++;
    for (j=2;j<=a/2;j++)
      if (a%j==0) break;
    if (j>=a/2)
     {i++;
      if (i>=m) 
         if ((i-m+1)%10!=0) printf("%d ",a);
          else printf("%d\n",a);}
    }    
  printf("\n"); 
  return 0;
} 
   

