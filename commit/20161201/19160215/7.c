#include<stdio.h>
int main()
{
 int a[100][100],b[100][100],c[100][100];
 int m,n,p,i,j,k;
 scanf("%d%d%d",&m,&n,&p);
 for(i=0;i<m;++i)
   for(j=0;j<n;++j)
     scanf("%d",&a[i][j]);
 for(i=0;i<n;++i)
   for(j=0;j<p;++j)
     scanf("%d",&b[i][j]);
 for(i=0;i<m;++i)
   for(j=0;j<p;++j)
     for(k=0;k<n;++k)
       c[i][j]+=a[i][k]*b[k][j];
 for(i=0;i<m;++i)
 {
   for(j=0;j<=p-1;++j)
     printf("%d ",c[i][j]);
   printf("%d\n",c[i][p]);
 }
 return 0;
}

