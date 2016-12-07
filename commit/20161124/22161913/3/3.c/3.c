#include<stdio.h>
#include<string.h>
#define MAX 100
int is_str_pal(const char* str[])
{
    char i,j;
    int flag=0;
    for(i=0,j=strlen(str)-1;j>i;i++,j--)
       if(str[i]!=str[j])  
       { 
         return flag=-1;
         break;
       } 
    return flag;
}
int main()
{
   const char* a[MAX];
   puts("请输入字符串: ");
   gets(a);
   if(is_str_pal(a))
      printf("%s是回文串\n",a);
   else
      printf("%s不是回文串\n",a);
   return 0;
}

