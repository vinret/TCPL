#include<stdio.h>
#include<string.h>
int main()
{
char c[100000];
int N=0,i,k,x[100000];
int y=0,z=0,m=0;
int n[27]={0};
fgets(c,100000,stdin);
for (k=1;k<=26;k++)
{
for (i=0;i<strlen(c);i++)
{
if ((int)c[i]-64==k || (int)c[i]-96==k)
n[k]=n[k]+1;
}
}
for(k=1;k<=26;k++)
{
N+=k*n[k];
}
for (i=0;N!=0;i++)
{
x[i]=N%2;
N=N/2;
m++;
}
for (i--;i>=0;i--)
{
if (x[i]==0) y++;
if (x[i]==1) z++;
}
printf("%d %d\n", y,z);
return 0;
}
