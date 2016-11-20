#include<stdio.h>
#include<string.h>
int main()
{
char a[10000],b[26];
int i,j,sum=0,zero=0,one=0;
gets(a);
for(i=0;i<=strlen(a);i++)
{
for(j=1;j<=26;j++)
{
b[j]='a'+j-1;
if((int)a[i]==(int)b[j])
sum=sum+j;
}
}
//printf("%d\n",sum);
while(sum!=0)
{
if(sum%2==0) zero+=1;
if(sum%2==1) one+=1;
sum/=2;
}
printf("%d %d\n",zero,one);
return 0;
}
