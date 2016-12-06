#include <stdio.h>
#include <string.h>
void reverse(char *str)
{
  int temp[100],i,j;
  for(i=strlen(str)-1,j=0;i>=0;--i,++j)
    { temp[j]=str[i];
      printf("%c",temp[j]);
    }
}

int main()
{
  char string[100];
  char *str;
  gets(string);
  str=string;
  reverse(str);
  return 0;
}
