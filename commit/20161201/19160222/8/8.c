#include<stdio.h>

int main()
{
int i=0,temp,k,j;
int x[100];
while(scanf("%d",&x[i])!=EOF)
{
i++;
}
for(k=0;k<i;k++)
{
for(j=0;j<i-k-1;j++)
{
if(x[j]>=x[j+1]) {temp=x[j];x[j]=x[j+1];x[j+1]=temp;}
}
}
for(i--;i>=0;i--)
{
printf("%d ",x[i]);
}
printf("\n");
return 0;
}
