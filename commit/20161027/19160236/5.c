#include<stdio.h>
#include<math.h>
int dp(int x,int y);
int main()
{
int A,DA,B,DB,PA,PB;
scanf("%d %d %d %d",&A,&DA,&B,&DB);
PA=dp(A,DA);
PB=dp(B,DB);
printf("%d\n",PA+PB);
return 0;
}

int dp(int x,int y)
{
int i,m=0,j=0,a[100];
for(i=0;x>0;i++)
{
a[i]=x%10;
x=x/10;
}
for(i=i-1;i>=0;i--)
if(a[i]==y)
{
m=m+y*pow(10,j);
j=j+1;
}
return m;
}
