#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
char s[100];
itoa(n,s,10);
int l=strlen(s);
int i;
for (i=0;i<=l/2;++i)
if (s[i]!=s[l-i-1]) 
return -1;
return 0;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}

