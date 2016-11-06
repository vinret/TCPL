#include <stdio.h>
int main()
{
  int i,n,p;
 
  for(i=1;i<=9;i++)
  {
     for(n=1;n<=i;n++)
     {
       printf("%d*%d=%d ",i,n,i*n);
     }
   printf("\n");
  }
 
   
  return 0;
}
