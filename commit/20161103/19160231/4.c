#include<stdio.h>
#include<string.h>
int main()
{
char in[1000];
gets(in);
int num[128]={0};
int i,j;
for(i=0;i<strlen(in);++i)
{
if(in[i]>='A'&&in[i]<='Z')
in[i]=in[i]+32;
for(j=97;j<=122;++j)
{
if(j==(int)in[i])
num[j]=num[j]+1;
}
}
int max=0;
char c;
for(i=97;i<=122;++i)
{
if(num[i]>max)
{
max=num[i];
c=(char)i;
}
}
printf("%c%d",c,max);
return 0;
}
