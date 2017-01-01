#include<stdio.h>
#include<string.h>
#define Max 1000
int is_str_pal(const char *str)
{
 int l=strlen(str)-1;
 int flag=0;
 for(int i=0;i<=l/2;++i)
    if(str[i]!=str[l-i-1])
    {
     flag=-1;
     break;
     }
  return flag;
  }

int main()
{
  char s[Max];
  puts("Please enter a string:");
  fgets(s,Max,stdin);
  printf("%d\n",is_str_pal(s));
    
  return 0;
  }

