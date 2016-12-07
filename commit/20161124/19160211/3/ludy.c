#include <stdio.h>
#include <string.h>
#define MAX 50
int is_str_pal(const char * str);
int main()
{
  char str[MAX];
  printf("输入字符串,字符数少于50\n");
  scanf("%s",str);puts(str);
  int a,b;
  a=is_str_pal(str);
  b=a+1;
  if(b)
  printf("该串回文\n");
  else
  printf("该串不回文\n");
  return 0;
}
int is_str_pal(const char * str)
{
  int i,k,len;
  char hw[MAX]={0};
  len=strlen(str);
  for(i=0;i<len;i++)
  hw[len-i-1]=str[i];puts(hw);
  k=strcmp(str,hw);
  k++;
  if(k)
  return 0;
  else
  return -1;
}
