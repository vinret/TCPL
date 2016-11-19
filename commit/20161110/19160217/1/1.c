#include<stdio.h>
#define n 10
int main()
{
   int c[n][n];
   int i,j;               /*i hang j lie*/
   for(i=0;i<n;i++)
      {
        c[i][0]=1;
        c[i][i]=1;
      }                   /*tou wei jun wei 1*/
    for(i=2;i<n;i++)     /*ji suan yang hui san jiao*/
      {
         for(j=1;j<i;j++)
             
               c[i][j]=c[i-1][j-1]+c[i-1][j];
             
       }
    for(i=0;i<n;i++)     /*print shu zu*/
        {
          for(j=0;j<=i;j++)
              printf(" %d",c[i][j]);
          printf("\n");
        }
    return 0;
}




