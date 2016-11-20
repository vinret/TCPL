#include<stdio.h>
int main()
{
int a[200]={0};
int i,b,max=0;
char c[1001];
gets(c);
char *p=c;
while (*p)
{
if(*p>='A'&&*p<='Z')
{
*p=*p-'A'+'a';
a[*p]++;
}
else if(*p>='a'&&*p<='z')
{
a[*p]++;
}
*p++;
}
for (i=97;i<122;i++)
{
if(a[i]>max)
{
max=a[i];
b=i;
}
}
printf("%c %d\n",(char)b,max);
return 0;
}
