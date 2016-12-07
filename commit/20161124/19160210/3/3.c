#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
int i,n=strlen(str);
for (i=0;i<=n/2-1;i++)
 if (str[i]!=str[n-1-i])
   return -1;
 return 0;
}


int main()
{
char str[1000];
gets(str);
if (is_str_pal(str))
 printf("不是回文字符串\n");
else printf("是回文字符串\n");
return 0;
}
