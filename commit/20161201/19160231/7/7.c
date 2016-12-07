#include<stdio.h>
void input(int m,int n,int a[m][n]);
void output(int m,int n, int a[m][n]);
int main()
{
int a,b,c,i,j,k;
printf("input the row and the col of matrix x:");
scanf("%d%d",&a,&b);
printf("input the col of matrix y:");
scanf("%d",&c);
int x[a][b],y[b][c],z[][100]={0};
input(a,b,x);
input(b,c,y);
for(j=0;j<b;j++)
{
for(i=0;i<a;i++)
{
for(k=0;k<c;k++)
z[i][k]+=x[i][j]*y[j][k];
}
}
output(a,c,z);
return 0;
}

void input(int m,int n,int a[m][n])
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[m][n]);
}
}


void output(int m,int n,int a[m][n])
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",a[m][n]);
}
}

