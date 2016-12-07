#include<stdio.h>

int main()
{
long a[10][10],b[10][10],r[10][10]={0};
int i,j,m,n,k,l;
scanf("%d %d %d",&m,&n,&k);

printf("plase put number \n");
for(i=0;i<m;i++)
for(j=0;j<k;j++)
{
scanf("%ld",&a[i][j]);
}

printf("please put number of :\n");
for(i=0;i<n;i++)
for(j=0;j<k;j++)
{
scanf("%ld",&b[i][j]);
}

for(i=0;i<m;i++)
for(j=0;j<k;j++)
for(l=0;l<n;l++)
r[i][j]=r[i][j]+a[i][l]*b[l][j];

printf("result:\n");
for(i=0;i<m;i++)
{
for(j=0;j<k;j++)
printf("%ld",r[i][j]);
}
printf("\n");
return 0;
}
