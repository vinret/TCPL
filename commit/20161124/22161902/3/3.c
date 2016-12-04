#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str)
{int n,i;
char str2[100];
char str1[100];
strcpy(str1,str);
n=strlen(str1);
for(i=0;i<n;i++)
{str2[i]=str1[n-i-1];}
for(i=0;i<n;i++)
{
if(str2[i]!=str1[i]) return -1;
return 0;
}}

int main()
{

int n;
char str[100];
scanf("%s",str);
n=is_str_pal(str);
printf("%d\n",n);
return 0;
}



