#include <stdio.h>
#include <string.h>
int is_str_pal(const char *str)
{int i,j;
 int flag=0;
 for(i=0,j=strlen(str)-1;j>i;i++,j--)
   if(str[i]!=str[j]) {flag=-1;break;}
 return flag;}
int main()
{char str[100];
 scanf("%s",str);
 if(is_str_pal(str)==0)
   printf("%s is a palindrome string.\n",str);
 else
   printf("%s is not a palindrome string.\n",str);
 return 0;}
 
