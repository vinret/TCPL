#include<stdio.h>
int main()
{
   int i,j,a;
   for(i=1;i<10;i++)
   {
     for(j=1;j<i+1;j++)
     {
      a=i*j;
      printf("%d*%d=%-5d",j,i,a);
     }
   printf("\n");
   }
}
