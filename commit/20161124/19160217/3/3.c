#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
  char str[101];int i;
  scanf("%s",str);
  int a=is_str_pal(str);
  printf("%d",a);
  return 0;
}

int is_str_pal(const char* str)
{
  int c=strlen(str),i,j;
  for(i=0,j=c-1;i<j;i++,j--)
     if(str[i]!=str[j])
         break;
     if(i>=j)
       return 0;
     else 
       return -1;
}  

  

