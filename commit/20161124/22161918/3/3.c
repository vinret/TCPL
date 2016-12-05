#include<stdio.h>
#include<string.h>
#define MAX 1000
int is_int_pal(const char* str);
int main()
{
  char c[MAX];
  scanf("%s",c);
  if(is_int_pal(c))
    printf("%s不是回文串\n",c);
  else 
    printf("%s是回文串\n",c);
  return 0;
}
int is_int_pal(const char* s)
{
  int i,j;
  for(i=0,j=strlen(s)-1;j>i;i++,j--)
    if(s[i]!=s[j]) return -1;
  return 0;
}
