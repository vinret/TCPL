#include<stdio.h>

int main()
{
int A[2][3],B[3][2],x[2][2];
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&A[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&B[i][j]);
}
}

for(i=0;i<2;i++)
{
                        
for(j=0;j<2;j++)
{
printf("%7d",A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j]);
}
printf("\n");
}
return 0;
}

