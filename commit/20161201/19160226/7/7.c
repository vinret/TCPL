#include<stdio.h>
void mutiply(int m,int n,int p,int a[10][10],int b[10][10],int c[10][10])
   {
   int i,j,k,sum;
   for(i=0;i<m;i++)
      for(j=0;j<p;j++)
      {
      sum=0;
      for(k=0;k<n;k++)
      sum+=a[i][k]*b[k][j];
      c[i][j]=sum;
      }
   }

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n,p,t;
    printf("Please input m,n,p\n");
    scanf("%d %d %d",&m,&n,&p);

    printf("Please input numbers of a:\n");
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       {
          scanf("%d",&t);
          a[i][j]=t;
       }
    
    printf("Please input numbers of b:\n");
    for(i=0;i<n;i++)
       for(j=0;j<p;j++)
       {
          scanf("%d",&t);
          b[i][j]=t;
       }
 
    mutiply(m,n,p,a,b,c); 
    printf("Result:\n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<p;j++)
       printf("%d ",c[i][j]);
       printf("\n");
    }
    return 0;
}

