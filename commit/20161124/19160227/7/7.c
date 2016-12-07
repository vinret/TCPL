#include<stdio.h>
int main()
{
int x[200],i,N,M;
scanf("%d%d",&N,&M);
for(i=0;i<N;i++)
{
scanf("%d",&x[i]);
}
for(i=i-1;i>=0;i--)
{
x[i+M]=x[i];
}
for(i=0;i<M;i++)
{
x[i]=x[N+i];
}

for(i=0;i<N-1;i++)
{
printf("%d ",x[i]);
}
printf("%d\n",x[N-1]);
return 0;
} 
