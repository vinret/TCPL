#include<stdio.h>
#include<string.h>
int main(void)
{
int i,j,n,m,temp,count=0,sum=0;
char A[12];
char a[12];
char D;

n=0;
for(i=1;i<=2;i++)
{
m=0;
scanf("%s",A);
scanf(" %c",&D);
temp=strlen(A);

for(j=0;j<temp;j++)
{
if(D==A[j])
{
count++;
}
}
if(count!=0)
{
for(j=1;j<=count;j++)
{
m=m*10+D-'0';
}
sum=sum+m;
count=0;
}
}
printf("%d\n",sum);
return 0;
}
