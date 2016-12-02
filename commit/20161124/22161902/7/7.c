#include <stdio.h>
int main()
{
int N,M,i,j,a;
scanf("%d %d",&N,&M);
int num[N];
for(i=0;i<N;i++)
{
scanf("%d",&num[i]);
}
printf("\n");
for(i=0;i<M;i++)
{
a=num[N-1];
for(j=N-1;j>0;j--)
{num[j]=num[j-1];}
num[0]=a;
}
for(i=0;i<N-1;i++)
{printf("%d",num[i]);
 printf(" ");
}
printf("%d\n",num[N-1]);
return 0;
}
