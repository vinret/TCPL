#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[1001],b[26];
int c[26]={0},i,j,max=0,temp=0;
gets(a);
for(j=0;j<=strlen(a);j++)
{
for(i=0;i<26;i++)
{
b[i]='a'+i;
if(a[j]==b[i]||a[j]==b[i]-32)
c[i]+=1;
}
}
for(i=0;i<26;i++)
{
if(c[i]>max)
{max=c[i];
temp=i;
}
}
printf("%c %d\n",b[temp],max);
return 0;
}
