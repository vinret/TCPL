#include<stdio.h>
#include<string.h>
int main()
{
char c[1000];
int m,i,k,a;
int n[26]={0};
gets(c);
for(k=0;k<=25;k++)
{
for(i=0;i<=strlen(c);i++)
{
if((int)c[i]-65==k||(int)c[i]-97==k)
{n[k]=n[k]+1;}
}
}
m=n[0];
a=0;
for(k=1;k<=25;k++)
{
if(n[k]>m)
{m=n[k];a=k;}
}
printf("%c %d\n",a+97,m);
return 0;
}
