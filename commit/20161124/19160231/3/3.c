#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
 char string[1000];

void main()
{
const char* str;
gets(string);
str=string;
printf("%d\n",is_str_pal(str));
}

int is_str_pal(const char* str)
{
int i,j,flag=0;
for(i=0,j=strlen(string)-1;j>i;i++,j--)
if(string[i]!=string[j])
{flag=-1;break;}
 return flag;
}
