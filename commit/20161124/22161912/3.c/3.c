#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
   int i,j;
   int flag=0;
   for(i=0,j=strlen(str)-1;j>i;i++,j--)
      if(str[i]!=str[j])
      {
         flag=-1;
         break;
      }
   return flag;
}
int main()
{
    int a;
    const char str[128];
    gets(str);
    a=is_str_pal(str);
    if(a)
       printf("%s is not Palindrome string\n",str);
    else
       printf("%s is Palindrome string\n",str);
    return 0;
}

