#include<stdio.h>
#include<string.h>
int is_str_pal(const char*str)
{
   char i,j;
   for(i=0,j=strlen(str)-1;j>i;i++,j--)
   if(str[i]!=str[j])
   return -1;
   else
   return 0;
}
int main()
{
   char str[50];
   puts("请输入字符串：");
   gets(str);
   if(is_str_pal(str))
   printf("%s是回文数.\n",str);
   else
   printf("%s不是回文数.\n",str);
   return 0;
}
