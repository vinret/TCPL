#include<stdio.h>
int main()
{
int a[100],i,N,M;
scanf("%d %d",&N,&M);
for(i=M;i<N;i++)
scanf("%d",&a[i]);
for(i=0;i<M;i++)
scanf("%d",&a[i]);
for(i=0;i<N-1;i++)
printf("%d ",a[i]);
printf("%d\n",a[i]);
return 0;

}
