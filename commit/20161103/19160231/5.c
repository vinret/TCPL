#include<stdio.h>
#include<string.h>
int main()
{
char in[100000],a[64];
int sum=0,i,j=0,x=0,y=0,k;
fgets(in,100000,stdin);
for(k=1;k<=26;k++)
{
for(i=0;i<strlen(in);i++)
{
if((int)in[i]-64==k||(int)in[i]-96==k)
sum=sum+k;
}
}
while(sum!=0)
{
a[j]=sum%2;
sum=sum/2;
j++;
}
for(j=j-1;j>=0;j--)
{
if(a[j]==0)
x=x+1;
else if(a[j]==1)
y=y+1;
}
printf("%d%d\n",x,y);
return 0;
}
