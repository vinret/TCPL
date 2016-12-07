#include<stdio.h>
#include<string.h>
#define MAX 50
int is_str_pal(const char *str);
int main()
{char str1[50];
printf("please tnput a string\n");
 scanf("%s",&str1);
if(is_str_pal(str1))
printf("%s is a palindrome string.\n",str1);
else
printf("%s is not a palindrome string.\n",str1);
return 0;
}
int is_str_pal(const char *str)
{char i,j;
 int flag=-1;
for(i=0,j=strlen(str)-1;j>i;i++,j--)
if(str[i]!=str[j])
{flag=0;
break;}
return flag;
}

