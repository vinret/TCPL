#include<stdio.h>
#include<string.h>
int is_str_pal(const char *str);

int main()
{
 char str[101];

 printf("Please input str:\n");
 gets(str);
 if(is_str_pal(str)==0)
  printf("It is str pal.\n");
 else 
  printf("It is not str pal.\n");

 return 0;
}

int is_str_pal(const char *str)
{
 int a,b;
 for(a=0,b=strlen(str)-1;b>a;a++,b--)
  if(str[a]!=str[b])
   return -1; 
 return 0;
} 
