#include<stdio.h>
#include<string.h>
int is_str_pal(const char *str)
{
  char a[100];
  int i,j;
  for(i=strlen(str)-1,j=0;i>=0;--i,++j)
    a[i]=str[j];
  for(i=i+1;i<strlen(str);++i)
    if(a[i]!=str[i]) break;
    if(i<strlen(str)-1)
      return -1;
    else return 0;
}
int main()
{
  char string[100];
  const char *str;
  printf("input a string: ");
  gets(string);
  str=string;
  printf("%d\n",is_str_pal(str));
  return 0;
}
